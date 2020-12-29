// Fill out your copyright notice in the Description page of Project Settings.


#include "Nostenfer.h"

void ANostenfer::setPoids(int kilo) {
	this->Poids = kilo;
}
int ANostenfer::getPoids() {
	return this->Poids;
}

void ANostenfer::Caresser() {
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Orange, TEXT("Pat pat the pokemon"));
	}
}

void ANostenfer::ramasser_Implementation()
{
	Super::ramasser_Implementation();
	Destroy();
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Mort"));
}

