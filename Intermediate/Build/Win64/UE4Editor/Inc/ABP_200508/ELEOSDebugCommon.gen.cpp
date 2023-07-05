// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELEOSDebugCommon.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELEOSDebugCommon() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_AELEOSDebugCommon_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_AELEOSDebugCommon();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	void AELEOSDebugCommon::StaticRegisterNativesAELEOSDebugCommon()
	{
	}
	UClass* Z_Construct_UClass_AELEOSDebugCommon_NoRegister()
	{
		return AELEOSDebugCommon::StaticClass();
	}
	struct Z_Construct_UClass_AELEOSDebugCommon_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSetup_MetaData[];
#endif
		static void NewProp_bSetup_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSetup;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShow_MetaData[];
#endif
		static void NewProp_bShow_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShow;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebugDisableTextFilter_MetaData[];
#endif
		static void NewProp_DebugDisableTextFilter_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DebugDisableTextFilter;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AELEOSDebugCommon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELEOSDebugCommon_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELEOSDebugCommon.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELEOSDebugCommon.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELEOSDebugCommon_Statics::NewProp_bSetup_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELEOSDebugCommon" },
		{ "ModuleRelativePath", "Public/ELEOSDebugCommon.h" },
	};
#endif
	void Z_Construct_UClass_AELEOSDebugCommon_Statics::NewProp_bSetup_SetBit(void* Obj)
	{
		((AELEOSDebugCommon*)Obj)->bSetup = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AELEOSDebugCommon_Statics::NewProp_bSetup = { "bSetup", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AELEOSDebugCommon), &Z_Construct_UClass_AELEOSDebugCommon_Statics::NewProp_bSetup_SetBit, METADATA_PARAMS(Z_Construct_UClass_AELEOSDebugCommon_Statics::NewProp_bSetup_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELEOSDebugCommon_Statics::NewProp_bSetup_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELEOSDebugCommon_Statics::NewProp_bShow_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELEOSDebugCommon" },
		{ "ModuleRelativePath", "Public/ELEOSDebugCommon.h" },
	};
#endif
	void Z_Construct_UClass_AELEOSDebugCommon_Statics::NewProp_bShow_SetBit(void* Obj)
	{
		((AELEOSDebugCommon*)Obj)->bShow = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AELEOSDebugCommon_Statics::NewProp_bShow = { "bShow", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AELEOSDebugCommon), &Z_Construct_UClass_AELEOSDebugCommon_Statics::NewProp_bShow_SetBit, METADATA_PARAMS(Z_Construct_UClass_AELEOSDebugCommon_Statics::NewProp_bShow_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELEOSDebugCommon_Statics::NewProp_bShow_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELEOSDebugCommon_Statics::NewProp_DebugDisableTextFilter_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELEOSDebugCommon" },
		{ "ModuleRelativePath", "Public/ELEOSDebugCommon.h" },
	};
#endif
	void Z_Construct_UClass_AELEOSDebugCommon_Statics::NewProp_DebugDisableTextFilter_SetBit(void* Obj)
	{
		((AELEOSDebugCommon*)Obj)->DebugDisableTextFilter = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AELEOSDebugCommon_Statics::NewProp_DebugDisableTextFilter = { "DebugDisableTextFilter", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AELEOSDebugCommon), &Z_Construct_UClass_AELEOSDebugCommon_Statics::NewProp_DebugDisableTextFilter_SetBit, METADATA_PARAMS(Z_Construct_UClass_AELEOSDebugCommon_Statics::NewProp_DebugDisableTextFilter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELEOSDebugCommon_Statics::NewProp_DebugDisableTextFilter_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AELEOSDebugCommon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELEOSDebugCommon_Statics::NewProp_bSetup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELEOSDebugCommon_Statics::NewProp_bShow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELEOSDebugCommon_Statics::NewProp_DebugDisableTextFilter,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AELEOSDebugCommon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AELEOSDebugCommon>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AELEOSDebugCommon_Statics::ClassParams = {
		&AELEOSDebugCommon::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AELEOSDebugCommon_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AELEOSDebugCommon_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AELEOSDebugCommon_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AELEOSDebugCommon_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AELEOSDebugCommon()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AELEOSDebugCommon_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AELEOSDebugCommon, 2909024202);
	template<> ABP_200508_API UClass* StaticClass<AELEOSDebugCommon>()
	{
		return AELEOSDebugCommon::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AELEOSDebugCommon(Z_Construct_UClass_AELEOSDebugCommon, &AELEOSDebugCommon::StaticClass, TEXT("/Script/ABP_200508"), TEXT("AELEOSDebugCommon"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AELEOSDebugCommon);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
