// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/SaveData_DownloaderBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSaveData_DownloaderBase() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_USaveData_DownloaderBase_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_USaveData_DownloaderBase();
	ABP_200508_API UClass* Z_Construct_UClass_USaveData_ProcessBase();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	void USaveData_DownloaderBase::StaticRegisterNativesUSaveData_DownloaderBase()
	{
	}
	UClass* Z_Construct_UClass_USaveData_DownloaderBase_NoRegister()
	{
		return USaveData_DownloaderBase::StaticClass();
	}
	struct Z_Construct_UClass_USaveData_DownloaderBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USaveData_DownloaderBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USaveData_ProcessBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveData_DownloaderBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SaveData_DownloaderBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SaveData_DownloaderBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USaveData_DownloaderBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USaveData_DownloaderBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USaveData_DownloaderBase_Statics::ClassParams = {
		&USaveData_DownloaderBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USaveData_DownloaderBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USaveData_DownloaderBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USaveData_DownloaderBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USaveData_DownloaderBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USaveData_DownloaderBase, 2988978000);
	template<> ABP_200508_API UClass* StaticClass<USaveData_DownloaderBase>()
	{
		return USaveData_DownloaderBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USaveData_DownloaderBase(Z_Construct_UClass_USaveData_DownloaderBase, &USaveData_DownloaderBase::StaticClass, TEXT("/Script/ABP_200508"), TEXT("USaveData_DownloaderBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USaveData_DownloaderBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
