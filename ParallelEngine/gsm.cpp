
#include "gsm.h"

void GSM::pop() {
	State * state = states.top();
	states.pop();
	delete state;
}

void GSM::push(State * s) {
	states.push(s);
}

void GSM::set(State * s) {
	State * state = states.top();
	states.pop();
	delete state;
	states.push(s);
}

void GSM::render() {
	states.top()->render();
}

void GSM::update(ALLEGRO_KEYBOARD_STATE &ks) {
	states.top()->update();
	states.top()->handleInput(ks);
}