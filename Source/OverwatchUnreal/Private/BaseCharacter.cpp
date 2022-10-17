// Fill out your copyright notice in the Description page of Project Settings.

#include "BaseCharacter.h"

#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"

// Sets default values
ABaseCharacter::ABaseCharacter()
{
	PrimaryActorTick.bCanEverTick = true;

	Camera1stPerson = CreateDefaultSubobject<UCameraComponent>(TEXT("FirstPersonCamera"));
	Camera1stPerson->SetupAttachment(GetCapsuleComponent());
	Camera1stPerson->SetRelativeLocation(FVector(-39.56f, 1.75f, 64.f)); // Position the camera
	Camera1stPerson->bUsePawnControlRotation = true;

	Mesh1stPerson = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("CharacterMesh1P"));
	Mesh1stPerson->SetOnlyOwnerSee(true);
	Mesh1stPerson->SetupAttachment(Camera1stPerson);
	Mesh1stPerson->bCastDynamicShadow = false;
	Mesh1stPerson->CastShadow = false;
	Mesh1stPerson->SetRelativeRotation(FRotator(1.9f, -19.19f, 5.2f));
	Mesh1stPerson->SetRelativeLocation(FVector(-0.5f, -4.4f, -155.7f));

	USkeletalMeshComponent* Mesh3rdPerson = GetMesh();
	Mesh3rdPerson->SetOwnerNoSee(true);
}

// Called when the game starts or when spawned
void ABaseCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABaseCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ABaseCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}
