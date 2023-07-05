// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/SaveData_UGC_Team.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSaveData_UGC_Team() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_USaveData_UGC_Team_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_USaveData_UGC_Team();
	ELITE_GAME_API UClass* Z_Construct_UClass_UELSaveGameBase();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FTeamSaveData();
// End Cross Module References
	void USaveData_UGC_Team::StaticRegisterNativesUSaveData_UGC_Team()
	{
	}
	UClass* Z_Construct_UClass_USaveData_UGC_Team_NoRegister()
	{
		return USaveData_UGC_Team::StaticClass();
	}
	struct Z_Construct_UClass_USaveData_UGC_Team_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TeamSaveDataArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TeamSaveDataArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TeamSaveDataArray;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USaveData_UGC_Team_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UELSaveGameBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveData_UGC_Team_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SaveData_UGC_Team.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SaveData_UGC_Team.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USaveData_UGC_Team_Statics::NewProp_TeamSaveDataArray_Inner = { "TeamSaveDataArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTeamSaveData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveData_UGC_Team_Statics::NewProp_TeamSaveDataArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SaveData_UGC_Team" },
		{ "ModuleRelativePath", "Public/SaveData_UGC_Team.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USaveData_UGC_Team_Statics::NewProp_TeamSaveDataArray = { "TeamSaveDataArray", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USaveData_UGC_Team, TeamSaveDataArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USaveData_UGC_Team_Statics::NewProp_TeamSaveDataArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USaveData_UGC_Team_Statics::NewProp_TeamSaveDataArray_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USaveData_UGC_Team_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveData_UGC_Team_Statics::NewProp_TeamSaveDataArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveData_UGC_Team_Statics::NewProp_TeamSaveDataArray,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USaveData_UGC_Team_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USaveData_UGC_Team>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USaveData_UGC_Team_Statics::ClassParams = {
		&USaveData_UGC_Team::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USaveData_UGC_Team_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USaveData_UGC_Team_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USaveData_UGC_Team_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USaveData_UGC_Team_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USaveData_UGC_Team()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USaveData_UGC_Team_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USaveData_UGC_Team, 2912727039);
	template<> ABP_200508_API UClass* StaticClass<USaveData_UGC_Team>()
	{
		return USaveData_UGC_Team::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USaveData_UGC_Team(Z_Construct_UClass_USaveData_UGC_Team, &USaveData_UGC_Team::StaticClass, TEXT("/Script/ABP_200508"), TEXT("USaveData_UGC_Team"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USaveData_UGC_Team);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
