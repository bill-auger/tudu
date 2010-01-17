
/**************************************************************************
 * Copyright (C) 2007-2010 Ruben Pollan Bella <meskio@sindominio.net>     *
 *                                                                        *
 *  This file is part of TuDu.                                            *
 *                                                                        *
 *  TuDu is free software; you can redistribute it and/or modify          *
 *  it under the terms of the GNU General Public License as published by  *
 *  the Free Software Foundation; version 3 of the License.        *
 *                                                                        *
 *  TuDu is distributed in the hope that it will be useful,               *
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *  GNU General Public License for more details.                          *
 *                                                                        *
 *  You should have received a copy of the GNU General Public License     *
 *  along with this program.  If not, see <http://www.gnu.org/licenses/>. *
 **************************************************************************/

#ifndef WINDOW_H
#define WINDOW_H

#include "defs.h"

class Window
{
public:
	Window(int lines, int cols, int y, int x);
	Window();
	~Window();

	int _addstr(const char *str);
	int _addstr(const wchar_t *str);
	int _addstr(string &str);
	int _addstr(wstring &str);
	int _addstr(int y, int x, const char *str);
	int _addstr(int y, int x, const wchar_t *str);
	int _addstr(int y, int x, string &str);
	int _addstr(int y, int x, wstring &str);
	int _addch(const char ch);
	int _addch(int y, int x, const char ch);
	int _refresh();
	int _redraw();
	int _move(int y, int x);
	int _attron(int attrs);
	int _attroff(int attrs);
	int _erase();
	wint_t _getch();
	void _getmaxyx(int& y, int& x);
	int _box();
	int _lines();
	int _cols();
	int _resize(int lines, int columns);
	int _mv(int y, int x);
	int _delwin();
protected:
	WINDOW *win;
};


#endif
