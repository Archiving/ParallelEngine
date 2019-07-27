#ifndef MENUBUTTON_H
#define MENUBUTTON_H

#include "button.h"
#include "menustates.h"
#include "igm.h"

class MenuButton : public Button {
public:
	MenuButton(float x1, float y1, float x2, float y2, ALLEGRO_BITMAP* bitmap, ALLEGRO_FONT* fontType,
		ALLEGRO_COLOR fontColor, std::string text, bool visible, MenuState returnState_, IGM* igm);

	void render() override;
	void onClick() override;

private:
	IGM* igm;
};

#endif 