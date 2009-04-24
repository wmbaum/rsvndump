/*
 *      rsvndump - remote svn repository dump
 *      Copyright (C) 2008-2009 Jonas Gehring
 *
 *      This program is free software: you can redistribute it and/or modify
 *      it under the terms of the GNU General Public License as published by
 *      the Free Software Foundation, either version 3 of the License, or
 *      (at your option) any later version.
 *
 *      This program is distributed in the hope that it will be useful,
 *      but WITHOUT ANY WARRANTY; without even the implied warranty of
 *      MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *      GNU General Public License for more details.
 *
 *      You should have received a copy of the GNU General Public License
 *      along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 * 	
 *      file: utils.h
 *      desc: Miscellaneous utility functions
 */


#ifndef UTILS_H
#define UTILS_H


#include "main.h"


/* Returns a canonicalized path that has been allocated using strdup() */
extern char *utils_canonicalize_strdup(char *path);

/* Recursively removes the contents of a directory and the directory */
/* itself it 'rmdir' is non-zero */
extern void utils_rrmdir(const char *path, char rmdir);


#endif