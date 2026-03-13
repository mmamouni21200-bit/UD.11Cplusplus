#include <SFML/Graphics.hpp>
#include <vector>
#include <iostream>

using namespace std;

int main() {
    // Crear finestra
    sf::RenderWindow window(sf::VideoMode(800, 600), "Mini Arkanoid");

    // Carregar textures (poses els fitxers PNG al mateix directori)
    sf::Texture tex_barra, tex_bola, tex_bloc;
    if (!tex_barra.loadFromFile("barra.png") ||
        !tex_bola.loadFromFile("bola.png") ||
        !tex_bloc.loadFromFile("bloc.png")) {
        cout << "Error al carregar les imatges!" << endl;
        return -1;
    }

    // Crear sprite barra
    sf::Sprite barra(tex_barra);
    barra.setPosition(350, 550);

    // Crear sprite bola
    sf::Sprite bola(tex_bola);
    bola.setPosition(390, 500);
    sf::Vector2f velocitatBola(0.3f, -0.3f);

    // Crear blocs
    vector<sf::Sprite> blocs;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 8; j++) {
            sf::Sprite bloc(tex_bloc);
            bloc.setPosition(10 + j * 100, 50 + i * 40);
            blocs.push_back(bloc);
        }
    }

    bool jocActiu = false;

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
            // Començar el joc amb barra espaiadora
            if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Space)
                jocActiu = true;
        }

        // Moure barra
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left) && barra.getPosition().x > 0)
            barra.move(-0.5f, 0);
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right) && barra.getPosition().x + barra.getGlobalBounds().width < 800)
            barra.move(0.5f, 0);

        // Actualitzar bola si joc actiu
        if (jocActiu) {
            bola.move(velocitatBola);

            // Col·lisions amb parets
            if (bola.getPosition().x <= 0 || bola.getPosition().x + bola.getGlobalBounds().width >= 800)
                velocitatBola.x = -velocitatBola.x;
            if (bola.getPosition().y <= 0)
                velocitatBola.y = -velocitatBola.y;

            // Col·lisió amb barra
            if (bola.getGlobalBounds().intersects(barra.getGlobalBounds()))
                velocitatBola.y = -velocitatBola.y;

            // Col·lisió amb blocs
            for (auto it = blocs.begin(); it != blocs.end();) {
                if (bola.getGlobalBounds().intersects(it->getGlobalBounds())) {
                    velocitatBola.y = -velocitatBola.y;
                    it = blocs.erase(it); // eliminar bloc
                } else {
                    ++it;
                }
            }

            // Bola perduda
            if (bola.getPosition().y > 600)
                jocActiu = false; // pausa fins a pitjar espai
        }

        // Pintar
        window.clear(sf::Color::Black);
        window.draw(barra);
        window.draw(bola);
        for (auto& bloc : blocs)
            window.draw(bloc);
        window.display();
    }

    return 0;
}