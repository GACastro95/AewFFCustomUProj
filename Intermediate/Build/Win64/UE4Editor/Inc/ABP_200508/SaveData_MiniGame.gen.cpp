// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/SaveData_MiniGame.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSaveData_MiniGame() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_USaveData_MiniGame_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_USaveData_MiniGame();
	ELITE_GAME_API UClass* Z_Construct_UClass_UELSaveGameBase();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	void USaveData_MiniGame::StaticRegisterNativesUSaveData_MiniGame()
	{
	}
	UClass* Z_Construct_UClass_USaveData_MiniGame_NoRegister()
	{
		return USaveData_MiniGame::StaticClass();
	}
	struct Z_Construct_UClass_USaveData_MiniGame_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_m_bAlreadyPlayedMiniGameArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_bAlreadyPlayedMiniGameArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_m_bAlreadyPlayedMiniGameArray;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USaveData_MiniGame_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UELSaveGameBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveData_MiniGame_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SaveData_MiniGame.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SaveData_MiniGame.h" },
	};
#endif
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USaveData_MiniGame_Statics::NewProp_m_bAlreadyPlayedMiniGameArray_Inner = { "m_bAlreadyPlayedMiniGameArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveData_MiniGame_Statics::NewProp_m_bAlreadyPlayedMiniGameArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SaveData_MiniGame" },
		{ "ModuleRelativePath", "Public/SaveData_MiniGame.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USaveData_MiniGame_Statics::NewProp_m_bAlreadyPlayedMiniGameArray = { "m_bAlreadyPlayedMiniGameArray", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USaveData_MiniGame, m_bAlreadyPlayedMiniGameArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USaveData_MiniGame_Statics::NewProp_m_bAlreadyPlayedMiniGameArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USaveData_MiniGame_Statics::NewProp_m_bAlreadyPlayedMiniGameArray_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USaveData_MiniGame_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveData_MiniGame_Statics::NewProp_m_bAlreadyPlayedMiniGameArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveData_MiniGame_Statics::NewProp_m_bAlreadyPlayedMiniGameArray,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USaveData_MiniGame_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USaveData_MiniGame>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USaveData_MiniGame_Statics::ClassParams = {
		&USaveData_MiniGame::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USaveData_MiniGame_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USaveData_MiniGame_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USaveData_MiniGame_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USaveData_MiniGame_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USaveData_MiniGame()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USaveData_MiniGame_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USaveData_MiniGame, 2151575469);
	template<> ABP_200508_API UClass* StaticClass<USaveData_MiniGame>()
	{
		return USaveData_MiniGame::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USaveData_MiniGame(Z_Construct_UClass_USaveData_MiniGame, &USaveData_MiniGame::StaticClass, TEXT("/Script/ABP_200508"), TEXT("USaveData_MiniGame"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USaveData_MiniGame);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
