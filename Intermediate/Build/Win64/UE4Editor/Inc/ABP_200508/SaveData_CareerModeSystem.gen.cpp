// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/SaveData_CareerModeSystem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSaveData_CareerModeSystem() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_USaveData_CareerModeSystem_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_USaveData_CareerModeSystem();
	ELITE_GAME_API UClass* Z_Construct_UClass_UELSaveGameBase();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FCareerSnapshotRaw();
// End Cross Module References
	void USaveData_CareerModeSystem::StaticRegisterNativesUSaveData_CareerModeSystem()
	{
	}
	UClass* Z_Construct_UClass_USaveData_CareerModeSystem_NoRegister()
	{
		return USaveData_CareerModeSystem::StaticClass();
	}
	struct Z_Construct_UClass_USaveData_CareerModeSystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Snapshots_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Snapshots_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Snapshots;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USaveData_CareerModeSystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UELSaveGameBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveData_CareerModeSystem_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SaveData_CareerModeSystem.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SaveData_CareerModeSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USaveData_CareerModeSystem_Statics::NewProp_Snapshots_Inner = { "Snapshots", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FCareerSnapshotRaw, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveData_CareerModeSystem_Statics::NewProp_Snapshots_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SaveData_CareerModeSystem" },
		{ "ModuleRelativePath", "Public/SaveData_CareerModeSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USaveData_CareerModeSystem_Statics::NewProp_Snapshots = { "Snapshots", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USaveData_CareerModeSystem, Snapshots), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USaveData_CareerModeSystem_Statics::NewProp_Snapshots_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USaveData_CareerModeSystem_Statics::NewProp_Snapshots_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USaveData_CareerModeSystem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveData_CareerModeSystem_Statics::NewProp_Snapshots_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveData_CareerModeSystem_Statics::NewProp_Snapshots,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USaveData_CareerModeSystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USaveData_CareerModeSystem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USaveData_CareerModeSystem_Statics::ClassParams = {
		&USaveData_CareerModeSystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USaveData_CareerModeSystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USaveData_CareerModeSystem_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USaveData_CareerModeSystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USaveData_CareerModeSystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USaveData_CareerModeSystem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USaveData_CareerModeSystem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USaveData_CareerModeSystem, 3032783194);
	template<> ABP_200508_API UClass* StaticClass<USaveData_CareerModeSystem>()
	{
		return USaveData_CareerModeSystem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USaveData_CareerModeSystem(Z_Construct_UClass_USaveData_CareerModeSystem, &USaveData_CareerModeSystem::StaticClass, TEXT("/Script/ABP_200508"), TEXT("USaveData_CareerModeSystem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USaveData_CareerModeSystem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
