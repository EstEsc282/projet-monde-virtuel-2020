// Fill out your copyright notice in the Description page of Project Settings.


#include "Roserade.h"

void ARoserade::setPoids(int kilo) {
	this->Poids = kilo;
}
int ARoserade::getPoids() {
	return this->Poids;
}

void ARoserade::Attouchement() {
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Purple, TEXT("Aie cela pique"));
	}
}

