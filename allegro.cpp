#include <allegro.h>

int main()
{
	allegro_init();
	install_keyboard();

	set_color_depth(32);
	set_gfx_mode( GFX_AUTODETECT_WINDOWED, 800, 600, 0, 0);

	BITMAP *buffer = create_bitmap(800, 600);
	clear_to_color(buffer, 0x333333);

	rect(buffer, 50, 50, 100, 100, 0x5555555);

	textout_centre_ex(buffer, font, "Titulo Jogo", 320, 10, 0xFFFFFF, 0x3333333);

	rectfill(buffer, 150, 50, 200, 100, 0xDF1600);

	blit(buffer, screen, 0, 0, 0, 0, 800, 600);

	readkey();

	destroy_bitmap(buffer);

	return 0;

}
END_OF_MAIN(); 

