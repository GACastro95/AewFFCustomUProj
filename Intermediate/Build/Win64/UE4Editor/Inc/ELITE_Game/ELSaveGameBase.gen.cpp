// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE_Game/Public/ELSaveGameBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSaveGameBase() {}
// Cross Module References
	ELITE_GAME_API UClass* Z_Construct_UClass_UELSaveGameBase_NoRegister();
	ELITE_GAME_API UClass* Z_Construct_UClass_UELSaveGameBase();
	ENGINE_API UClass* Z_Construct_UClass_USaveGame();
	UPackage* Z_Construct_UPackage__Script_ELITE_Game();
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FELSaveDataHeader();
// End Cross Module References
	void UELSaveGameBase::StaticRegisterNativesUELSaveGameBase()
	{
	}
	UClass* Z_Construct_UClass_UELSaveGameBase_NoRegister()
	{
		return UELSaveGameBase::StaticClass();
	}
	struct Z_Construct_UClass_UELSaveGameBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_stHeader_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_m_stHeader;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELSaveGameBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USaveGame,
		(UObject* (*)())Z_Construct_UPackage__Script_ELITE_Game,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSaveGameBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELSaveGameBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSaveGameBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSaveGameBase_Statics::NewProp_m_stHeader_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSaveGameBase" },
		{ "ModuleRelativePath", "Public/ELSaveGameBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELSaveGameBase_Statics::NewProp_m_stHeader = { "m_stHeader", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSaveGameBase, m_stHeader), Z_Construct_UScriptStruct_FELSaveDataHeader, METADATA_PARAMS(Z_Construct_UClass_UELSaveGameBase_Statics::NewProp_m_stHeader_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSaveGameBase_Statics::NewProp_m_stHeader_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UELSaveGameBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSaveGameBase_Statics::NewProp_m_stHeader,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELSaveGameBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELSaveGameBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELSaveGameBase_Statics::ClassParams = {
		&UELSaveGameBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UELSaveGameBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UELSaveGameBase_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELSaveGameBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELSaveGameBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELSaveGameBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELSaveGameBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELSaveGameBase, 1198533078);
	template<> ELITE_GAME_API UClass* StaticClass<UELSaveGameBase>()
	{
		return UELSaveGameBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELSaveGameBase(Z_Construct_UClass_UELSaveGameBase, &UELSaveGameBase::StaticClass, TEXT("/Script/ELITE_Game"), TEXT("UELSaveGameBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELSaveGameBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
