// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE_Game/Public/ELBarbedWireBoard.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELBarbedWireBoard() {}
// Cross Module References
	ELITE_GAME_API UClass* Z_Construct_UClass_AELBarbedWireBoard_NoRegister();
	ELITE_GAME_API UClass* Z_Construct_UClass_AELBarbedWireBoard();
	ENGINE_API UClass* Z_Construct_UClass_ASkeletalMeshActor();
	UPackage* Z_Construct_UPackage__Script_ELITE_Game();
// End Cross Module References
	void AELBarbedWireBoard::StaticRegisterNativesAELBarbedWireBoard()
	{
	}
	UClass* Z_Construct_UClass_AELBarbedWireBoard_NoRegister()
	{
		return AELBarbedWireBoard::StaticClass();
	}
	struct Z_Construct_UClass_AELBarbedWireBoard_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AELBarbedWireBoard_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASkeletalMeshActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ELITE_Game,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELBarbedWireBoard_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELBarbedWireBoard.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELBarbedWireBoard.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AELBarbedWireBoard_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AELBarbedWireBoard>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AELBarbedWireBoard_Statics::ClassParams = {
		&AELBarbedWireBoard::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AELBarbedWireBoard_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AELBarbedWireBoard_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AELBarbedWireBoard()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AELBarbedWireBoard_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AELBarbedWireBoard, 2757812062);
	template<> ELITE_GAME_API UClass* StaticClass<AELBarbedWireBoard>()
	{
		return AELBarbedWireBoard::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AELBarbedWireBoard(Z_Construct_UClass_AELBarbedWireBoard, &AELBarbedWireBoard::StaticClass, TEXT("/Script/ELITE_Game"), TEXT("AELBarbedWireBoard"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AELBarbedWireBoard);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
