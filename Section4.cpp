#pragma once
int faveNum { 36 }; // Cpp11 List Initialization Syntax (LIS)

static int getFavoriteNumber (int localFavoriteNumber) {
	return localFavoriteNumber ? localFavoriteNumber : faveNum;
}