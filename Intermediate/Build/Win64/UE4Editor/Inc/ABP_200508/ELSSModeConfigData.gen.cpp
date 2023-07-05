// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSModeConfigData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSModeConfigData() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELSSModeConfigData_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSModeConfigData();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	void UELSSModeConfigData::StaticRegisterNativesUELSSModeConfigData()
	{
	}
	UClass* Z_Construct_UClass_UELSSModeConfigData_NoRegister()
	{
		return UELSSModeConfigData::StaticClass();
	}
	struct Z_Construct_UClass_UELSSModeConfigData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SSModeDebug_DisableLoginCheck_MetaData[];
#endif
		static void NewProp_SSModeDebug_DisableLoginCheck_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SSModeDebug_DisableLoginCheck;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SSModeDebug_LoginSkip_MetaData[];
#endif
		static void NewProp_SSModeDebug_LoginSkip_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SSModeDebug_LoginSkip;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SSModeDebug_DirectSSModeEntry_MetaData[];
#endif
		static void NewProp_SSModeDebug_DirectSSModeEntry_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SSModeDebug_DirectSSModeEntry;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SSModeDebug_SinglePlay_MetaData[];
#endif
		static void NewProp_SSModeDebug_SinglePlay_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SSModeDebug_SinglePlay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SSModeDebug_SinglePlayFixedSeconds_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SSModeDebug_SinglePlayFixedSeconds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SSModeDebug_ConnectQA1_MetaData[];
#endif
		static void NewProp_SSModeDebug_ConnectQA1_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SSModeDebug_ConnectQA1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SSModeDebug_ConnectDev1_MetaData[];
#endif
		static void NewProp_SSModeDebug_ConnectDev1_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SSModeDebug_ConnectDev1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SSModeDebug_ConnectDev2_MetaData[];
#endif
		static void NewProp_SSModeDebug_ConnectDev2_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SSModeDebug_ConnectDev2;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELSSModeConfigData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSModeConfigData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELSSModeConfigData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSSModeConfigData.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSModeConfigData_Statics::NewProp_SSModeDebug_DisableLoginCheck_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSModeConfigData" },
		{ "ModuleRelativePath", "Public/ELSSModeConfigData.h" },
	};
#endif
	void Z_Construct_UClass_UELSSModeConfigData_Statics::NewProp_SSModeDebug_DisableLoginCheck_SetBit(void* Obj)
	{
		((UELSSModeConfigData*)Obj)->SSModeDebug_DisableLoginCheck = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UELSSModeConfigData_Statics::NewProp_SSModeDebug_DisableLoginCheck = { "SSModeDebug_DisableLoginCheck", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UELSSModeConfigData), &Z_Construct_UClass_UELSSModeConfigData_Statics::NewProp_SSModeDebug_DisableLoginCheck_SetBit, METADATA_PARAMS(Z_Construct_UClass_UELSSModeConfigData_Statics::NewProp_SSModeDebug_DisableLoginCheck_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSModeConfigData_Statics::NewProp_SSModeDebug_DisableLoginCheck_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSModeConfigData_Statics::NewProp_SSModeDebug_LoginSkip_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSModeConfigData" },
		{ "ModuleRelativePath", "Public/ELSSModeConfigData.h" },
	};
#endif
	void Z_Construct_UClass_UELSSModeConfigData_Statics::NewProp_SSModeDebug_LoginSkip_SetBit(void* Obj)
	{
		((UELSSModeConfigData*)Obj)->SSModeDebug_LoginSkip = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UELSSModeConfigData_Statics::NewProp_SSModeDebug_LoginSkip = { "SSModeDebug_LoginSkip", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UELSSModeConfigData), &Z_Construct_UClass_UELSSModeConfigData_Statics::NewProp_SSModeDebug_LoginSkip_SetBit, METADATA_PARAMS(Z_Construct_UClass_UELSSModeConfigData_Statics::NewProp_SSModeDebug_LoginSkip_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSModeConfigData_Statics::NewProp_SSModeDebug_LoginSkip_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSModeConfigData_Statics::NewProp_SSModeDebug_DirectSSModeEntry_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSModeConfigData" },
		{ "ModuleRelativePath", "Public/ELSSModeConfigData.h" },
	};
#endif
	void Z_Construct_UClass_UELSSModeConfigData_Statics::NewProp_SSModeDebug_DirectSSModeEntry_SetBit(void* Obj)
	{
		((UELSSModeConfigData*)Obj)->SSModeDebug_DirectSSModeEntry = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UELSSModeConfigData_Statics::NewProp_SSModeDebug_DirectSSModeEntry = { "SSModeDebug_DirectSSModeEntry", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UELSSModeConfigData), &Z_Construct_UClass_UELSSModeConfigData_Statics::NewProp_SSModeDebug_DirectSSModeEntry_SetBit, METADATA_PARAMS(Z_Construct_UClass_UELSSModeConfigData_Statics::NewProp_SSModeDebug_DirectSSModeEntry_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSModeConfigData_Statics::NewProp_SSModeDebug_DirectSSModeEntry_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSModeConfigData_Statics::NewProp_SSModeDebug_SinglePlay_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSModeConfigData" },
		{ "ModuleRelativePath", "Public/ELSSModeConfigData.h" },
	};
#endif
	void Z_Construct_UClass_UELSSModeConfigData_Statics::NewProp_SSModeDebug_SinglePlay_SetBit(void* Obj)
	{
		((UELSSModeConfigData*)Obj)->SSModeDebug_SinglePlay = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UELSSModeConfigData_Statics::NewProp_SSModeDebug_SinglePlay = { "SSModeDebug_SinglePlay", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UELSSModeConfigData), &Z_Construct_UClass_UELSSModeConfigData_Statics::NewProp_SSModeDebug_SinglePlay_SetBit, METADATA_PARAMS(Z_Construct_UClass_UELSSModeConfigData_Statics::NewProp_SSModeDebug_SinglePlay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSModeConfigData_Statics::NewProp_SSModeDebug_SinglePlay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSModeConfigData_Statics::NewProp_SSModeDebug_SinglePlayFixedSeconds_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSModeConfigData" },
		{ "ModuleRelativePath", "Public/ELSSModeConfigData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UELSSModeConfigData_Statics::NewProp_SSModeDebug_SinglePlayFixedSeconds = { "SSModeDebug_SinglePlayFixedSeconds", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSModeConfigData, SSModeDebug_SinglePlayFixedSeconds), METADATA_PARAMS(Z_Construct_UClass_UELSSModeConfigData_Statics::NewProp_SSModeDebug_SinglePlayFixedSeconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSModeConfigData_Statics::NewProp_SSModeDebug_SinglePlayFixedSeconds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSModeConfigData_Statics::NewProp_SSModeDebug_ConnectQA1_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSModeConfigData" },
		{ "ModuleRelativePath", "Public/ELSSModeConfigData.h" },
	};
#endif
	void Z_Construct_UClass_UELSSModeConfigData_Statics::NewProp_SSModeDebug_ConnectQA1_SetBit(void* Obj)
	{
		((UELSSModeConfigData*)Obj)->SSModeDebug_ConnectQA1 = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UELSSModeConfigData_Statics::NewProp_SSModeDebug_ConnectQA1 = { "SSModeDebug_ConnectQA1", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UELSSModeConfigData), &Z_Construct_UClass_UELSSModeConfigData_Statics::NewProp_SSModeDebug_ConnectQA1_SetBit, METADATA_PARAMS(Z_Construct_UClass_UELSSModeConfigData_Statics::NewProp_SSModeDebug_ConnectQA1_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSModeConfigData_Statics::NewProp_SSModeDebug_ConnectQA1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSModeConfigData_Statics::NewProp_SSModeDebug_ConnectDev1_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSModeConfigData" },
		{ "ModuleRelativePath", "Public/ELSSModeConfigData.h" },
	};
#endif
	void Z_Construct_UClass_UELSSModeConfigData_Statics::NewProp_SSModeDebug_ConnectDev1_SetBit(void* Obj)
	{
		((UELSSModeConfigData*)Obj)->SSModeDebug_ConnectDev1 = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UELSSModeConfigData_Statics::NewProp_SSModeDebug_ConnectDev1 = { "SSModeDebug_ConnectDev1", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UELSSModeConfigData), &Z_Construct_UClass_UELSSModeConfigData_Statics::NewProp_SSModeDebug_ConnectDev1_SetBit, METADATA_PARAMS(Z_Construct_UClass_UELSSModeConfigData_Statics::NewProp_SSModeDebug_ConnectDev1_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSModeConfigData_Statics::NewProp_SSModeDebug_ConnectDev1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSModeConfigData_Statics::NewProp_SSModeDebug_ConnectDev2_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSModeConfigData" },
		{ "ModuleRelativePath", "Public/ELSSModeConfigData.h" },
	};
#endif
	void Z_Construct_UClass_UELSSModeConfigData_Statics::NewProp_SSModeDebug_ConnectDev2_SetBit(void* Obj)
	{
		((UELSSModeConfigData*)Obj)->SSModeDebug_ConnectDev2 = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UELSSModeConfigData_Statics::NewProp_SSModeDebug_ConnectDev2 = { "SSModeDebug_ConnectDev2", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UELSSModeConfigData), &Z_Construct_UClass_UELSSModeConfigData_Statics::NewProp_SSModeDebug_ConnectDev2_SetBit, METADATA_PARAMS(Z_Construct_UClass_UELSSModeConfigData_Statics::NewProp_SSModeDebug_ConnectDev2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSModeConfigData_Statics::NewProp_SSModeDebug_ConnectDev2_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UELSSModeConfigData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSModeConfigData_Statics::NewProp_SSModeDebug_DisableLoginCheck,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSModeConfigData_Statics::NewProp_SSModeDebug_LoginSkip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSModeConfigData_Statics::NewProp_SSModeDebug_DirectSSModeEntry,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSModeConfigData_Statics::NewProp_SSModeDebug_SinglePlay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSModeConfigData_Statics::NewProp_SSModeDebug_SinglePlayFixedSeconds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSModeConfigData_Statics::NewProp_SSModeDebug_ConnectQA1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSModeConfigData_Statics::NewProp_SSModeDebug_ConnectDev1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSModeConfigData_Statics::NewProp_SSModeDebug_ConnectDev2,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELSSModeConfigData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELSSModeConfigData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELSSModeConfigData_Statics::ClassParams = {
		&UELSSModeConfigData::StaticClass,
		"SSModeConfig",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UELSSModeConfigData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UELSSModeConfigData_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UELSSModeConfigData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSModeConfigData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELSSModeConfigData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELSSModeConfigData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELSSModeConfigData, 426024256);
	template<> ABP_200508_API UClass* StaticClass<UELSSModeConfigData>()
	{
		return UELSSModeConfigData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELSSModeConfigData(Z_Construct_UClass_UELSSModeConfigData, &UELSSModeConfigData::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELSSModeConfigData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELSSModeConfigData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
