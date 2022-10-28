#pragma once
#include<macros.h>

/* 
 * This is the structure declaration for donor
 */
typedef struct d_registrations 
{
	char dname[MAX],bgroup[MAX];
	long long aadharno; 
	int age,units;
	struct d_registrations *link;
	char un[MAX],pwd[MAX];
}reg;

/*
 * This is the structure declaration for receicer
 
 */
typedef struct r_registration
{
	char rname[MAX],bgroup[MAX];
	long long aadharno;
	struct r_registration *link;
	int age;

}r_reg;
