// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELEOSDebugLobby.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELEOSDebugLobby() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_AELEOSDebugLobby_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_AELEOSDebugLobby();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UClass* Z_Construct_UClass_UELEOSLobby_NoRegister();
// End Cross Module References
	void AELEOSDebugLobby::StaticRegisterNativesAELEOSDebugLobby()
	{
	}
	UClass* Z_Construct_UClass_AELEOSDebugLobby_NoRegister()
	{
		return AELEOSDebugLobby::StaticClass();
	}
	struct Z_Construct_UClass_AELEOSDebugLobby_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ELEOSLobby_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ELEOSLobby;
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
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AELEOSDebugLobby_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELEOSDebugLobby_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELEOSDebugLobby.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELEOSDebugLobby.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELEOSDebugLobby_Statics::NewProp_ELEOSLobby_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELEOSDebugLobby" },
		{ "ModuleRelativePath", "Public/ELEOSDebugLobby.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELEOSDebugLobby_Statics::NewProp_ELEOSLobby = { "ELEOSLobby", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELEOSDebugLobby, ELEOSLobby), Z_Construct_UClass_UELEOSLobby_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELEOSDebugLobby_Statics::NewProp_ELEOSLobby_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELEOSDebugLobby_Statics::NewProp_ELEOSLobby_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELEOSDebugLobby_Statics::NewProp_bSetup_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELEOSDebugLobby" },
		{ "ModuleRelativePath", "Public/ELEOSDebugLobby.h" },
	};
#endif
	void Z_Construct_UClass_AELEOSDebugLobby_Statics::NewProp_bSetup_SetBit(void* Obj)
	{
		((AELEOSDebugLobby*)Obj)->bSetup = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AELEOSDebugLobby_Statics::NewProp_bSetup = { "bSetup", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AELEOSDebugLobby), &Z_Construct_UClass_AELEOSDebugLobby_Statics::NewProp_bSetup_SetBit, METADATA_PARAMS(Z_Construct_UClass_AELEOSDebugLobby_Statics::NewProp_bSetup_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELEOSDebugLobby_Statics::NewProp_bSetup_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELEOSDebugLobby_Statics::NewProp_bShow_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELEOSDebugLobby" },
		{ "ModuleRelativePath", "Public/ELEOSDebugLobby.h" },
	};
#endif
	void Z_Construct_UClass_AELEOSDebugLobby_Statics::NewProp_bShow_SetBit(void* Obj)
	{
		((AELEOSDebugLobby*)Obj)->bShow = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AELEOSDebugLobby_Statics::NewProp_bShow = { "bShow", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AELEOSDebugLobby), &Z_Construct_UClass_AELEOSDebugLobby_Statics::NewProp_bShow_SetBit, METADATA_PARAMS(Z_Construct_UClass_AELEOSDebugLobby_Statics::NewProp_bShow_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELEOSDebugLobby_Statics::NewProp_bShow_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AELEOSDebugLobby_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELEOSDebugLobby_Statics::NewProp_ELEOSLobby,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELEOSDebugLobby_Statics::NewProp_bSetup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELEOSDebugLobby_Statics::NewProp_bShow,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AELEOSDebugLobby_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AELEOSDebugLobby>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AELEOSDebugLobby_Statics::ClassParams = {
		&AELEOSDebugLobby::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AELEOSDebugLobby_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AELEOSDebugLobby_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AELEOSDebugLobby_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AELEOSDebugLobby_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AELEOSDebugLobby()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AELEOSDebugLobby_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AELEOSDebugLobby, 1638848643);
	template<> ABP_200508_API UClass* StaticClass<AELEOSDebugLobby>()
	{
		return AELEOSDebugLobby::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AELEOSDebugLobby(Z_Construct_UClass_AELEOSDebugLobby, &AELEOSDebugLobby::StaticClass, TEXT("/Script/ABP_200508"), TEXT("AELEOSDebugLobby"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AELEOSDebugLobby);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
