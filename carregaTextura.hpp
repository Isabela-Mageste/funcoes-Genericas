sf::Texture carregaTextura(std::string nomeTextura) { //funcao generica que carrega uma textura
		sf::Texture texture;
		if (!texture.loadFromFile(nomeTextura)) {
			std::cout << "erro ao carregar a textura";
			return texture;
			// error...
		}
		return texture;
	}

/*Local de Uso
*int jogo() {
		sf::RenderWindow window(sf::VideoMode(800, 600), "Bloons by Mageste");

		while (window.isOpen()) {
			std::string nomeTextura = "background.PNG";//cria a string da textura a ser carregada, com o nome do arquivo

			sf::Event event;
			while (window.pollEvent(event)) {

				if (event.type == sf::Event::Closed)
					window.close();
			}

			window.clear(sf::Color::Black);

			// desenhe o resto aqui
			// window.draw(...);

   
			sf::Texture texturaFundo = carregaTextura(nomeTextura);//carrega a textura desejada
			sf::Sprite spriteFundo(texturaFundo);//cria um sprite com ela

			window.draw(spriteFundo);//desenha o sprite desejado retirado da textura


			// end the current frame
			window.display();
		}

		return 0;
	}

*
*
*
*
*/
