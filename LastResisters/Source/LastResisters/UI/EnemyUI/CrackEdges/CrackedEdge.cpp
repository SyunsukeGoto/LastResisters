// Fill out your copyright notice in the Description page of Project Settings.


#include "CrackedEdge.h"

FCrackedEdge::FCrackedEdge()
	: FirstCrack(nullptr)
	, SecondCrack(nullptr)
	, multiplier(0)
{
}

FCrackedEdge::FCrackedEdge(FCrackedEdge & other)
{
	this->multiplier = other.multiplier;
	this->FirstCrack = other.FirstCrack;
	this->SecondCrack = other.SecondCrack;

}
