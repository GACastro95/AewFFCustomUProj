// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/SaveDataObject_CareerModeSnapshot.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSaveDataObject_CareerModeSnapshot() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_USaveDataObject_CareerModeSnapshot_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_USaveDataObject_CareerModeSnapshot();
	ABP_200508_API UClass* Z_Construct_UClass_USaveDataObjectBase();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	void USaveDataObject_CareerModeSnapshot::StaticRegisterNativesUSaveDataObject_CareerModeSnapshot()
	{
	}
	UClass* Z_Construct_UClass_USaveDataObject_CareerModeSnapshot_NoRegister()
	{
		return USaveDataObject_CareerModeSnapshot::StaticClass();
	}
	struct Z_Construct_UClass_USaveDataObject_CareerModeSnapshot_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USaveDataObject_CareerModeSnapshot_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USaveDataObjectBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveDataObject_CareerModeSnapshot_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SaveDataObject_CareerModeSnapshot.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SaveDataObject_CareerModeSnapshot.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USaveDataObject_CareerModeSnapshot_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USaveDataObject_CareerModeSnapshot>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USaveDataObject_CareerModeSnapshot_Statics::ClassParams = {
		&USaveDataObject_CareerModeSnapshot::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USaveDataObject_CareerModeSnapshot_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USaveDataObject_CareerModeSnapshot_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USaveDataObject_CareerModeSnapshot()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USaveDataObject_CareerModeSnapshot_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USaveDataObject_CareerModeSnapshot, 889156438);
	template<> ABP_200508_API UClass* StaticClass<USaveDataObject_CareerModeSnapshot>()
	{
		return USaveDataObject_CareerModeSnapshot::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USaveDataObject_CareerModeSnapshot(Z_Construct_UClass_USaveDataObject_CareerModeSnapshot, &USaveDataObject_CareerModeSnapshot::StaticClass, TEXT("/Script/ABP_200508"), TEXT("USaveDataObject_CareerModeSnapshot"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USaveDataObject_CareerModeSnapshot);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
