// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yEOSSDK/Public/EOSTitleStorage.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOSTitleStorage() {}
// Cross Module References
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSTitleStorage_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSTitleStorage();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSTitleStorageBase();
	UPackage* Z_Construct_UPackage__Script_yEOSSDK();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	void UEOSTitleStorage::StaticRegisterNativesUEOSTitleStorage()
	{
	}
	UClass* Z_Construct_UClass_UEOSTitleStorage_NoRegister()
	{
		return UEOSTitleStorage::StaticClass();
	}
	struct Z_Construct_UClass_UEOSTitleStorage_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnDownloadJson_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OnDownloadJson;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEOSTitleStorage_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEOSTitleStorageBase,
		(UObject* (*)())Z_Construct_UPackage__Script_yEOSSDK,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSTitleStorage_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "EOSTitleStorage.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/EOSTitleStorage.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSTitleStorage_Statics::NewProp_OnDownloadJson_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSTitleStorage" },
		{ "ModuleRelativePath", "Public/EOSTitleStorage.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEOSTitleStorage_Statics::NewProp_OnDownloadJson = { "OnDownloadJson", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSTitleStorage, OnDownloadJson), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEOSTitleStorage_Statics::NewProp_OnDownloadJson_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSTitleStorage_Statics::NewProp_OnDownloadJson_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEOSTitleStorage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSTitleStorage_Statics::NewProp_OnDownloadJson,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEOSTitleStorage_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEOSTitleStorage>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEOSTitleStorage_Statics::ClassParams = {
		&UEOSTitleStorage::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEOSTitleStorage_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEOSTitleStorage_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEOSTitleStorage_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSTitleStorage_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEOSTitleStorage()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEOSTitleStorage_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEOSTitleStorage, 3892985902);
	template<> YEOSSDK_API UClass* StaticClass<UEOSTitleStorage>()
	{
		return UEOSTitleStorage::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEOSTitleStorage(Z_Construct_UClass_UEOSTitleStorage, &UEOSTitleStorage::StaticClass, TEXT("/Script/yEOSSDK"), TEXT("UEOSTitleStorage"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEOSTitleStorage);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
