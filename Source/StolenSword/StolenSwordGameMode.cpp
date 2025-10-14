// Fill out your copyright notice in the Description page of Project Settings.


#include "StolenSwordGameMode.h"
#include "StolenSwordCharacter.h"
#include "UObject/ConstructorHelpers.h"
#include "StolenSwordPlayerController.h"

AStolenSwordGameMode::AStolenSwordGameMode()
{
	// set default pawn class to our Blueprinted character
		// set default pawn class to our Blueprinted characterCharacters/Blueprints/BP_StolenSwordCharacter"));

	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/Characters/Ninja_Blockout_Rig/Blueprints/BP_StolenSwordCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}

	// Set the default player controller class
	PlayerControllerClass = AStolenSwordPlayerController::StaticClass();
}
