// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE/Public/ELWrestlerSaveDataAccessObject.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELWrestlerSaveDataAccessObject() {}
// Cross Module References
	ELITE_API UClass* Z_Construct_UClass_UELWrestlerSaveDataAccessObject_NoRegister();
	ELITE_API UClass* Z_Construct_UClass_UELWrestlerSaveDataAccessObject();
	ELITE_API UClass* Z_Construct_UClass_UELSaveDataAccessObject();
	UPackage* Z_Construct_UPackage__Script_ELITE();
// End Cross Module References
	void UELWrestlerSaveDataAccessObject::StaticRegisterNativesUELWrestlerSaveDataAccessObject()
	{
	}
	UClass* Z_Construct_UClass_UELWrestlerSaveDataAccessObject_NoRegister()
	{
		return UELWrestlerSaveDataAccessObject::StaticClass();
	}
	struct Z_Construct_UClass_UELWrestlerSaveDataAccessObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_FileNoList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FileNoList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FileNoList;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELWrestlerSaveDataAccessObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UELSaveDataAccessObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ELITE,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELWrestlerSaveDataAccessObject_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELWrestlerSaveDataAccessObject.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELWrestlerSaveDataAccessObject.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UELWrestlerSaveDataAccessObject_Statics::NewProp_FileNoList_Inner = { "FileNoList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELWrestlerSaveDataAccessObject_Statics::NewProp_FileNoList_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELWrestlerSaveDataAccessObject" },
		{ "ModuleRelativePath", "Public/ELWrestlerSaveDataAccessObject.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UELWrestlerSaveDataAccessObject_Statics::NewProp_FileNoList = { "FileNoList", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELWrestlerSaveDataAccessObject, FileNoList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELWrestlerSaveDataAccessObject_Statics::NewProp_FileNoList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELWrestlerSaveDataAccessObject_Statics::NewProp_FileNoList_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UELWrestlerSaveDataAccessObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELWrestlerSaveDataAccessObject_Statics::NewProp_FileNoList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELWrestlerSaveDataAccessObject_Statics::NewProp_FileNoList,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELWrestlerSaveDataAccessObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELWrestlerSaveDataAccessObject>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELWrestlerSaveDataAccessObject_Statics::ClassParams = {
		&UELWrestlerSaveDataAccessObject::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UELWrestlerSaveDataAccessObject_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UELWrestlerSaveDataAccessObject_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELWrestlerSaveDataAccessObject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELWrestlerSaveDataAccessObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELWrestlerSaveDataAccessObject()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELWrestlerSaveDataAccessObject_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELWrestlerSaveDataAccessObject, 3584503260);
	template<> ELITE_API UClass* StaticClass<UELWrestlerSaveDataAccessObject>()
	{
		return UELWrestlerSaveDataAccessObject::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELWrestlerSaveDataAccessObject(Z_Construct_UClass_UELWrestlerSaveDataAccessObject, &UELWrestlerSaveDataAccessObject::StaticClass, TEXT("/Script/ELITE"), TEXT("UELWrestlerSaveDataAccessObject"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELWrestlerSaveDataAccessObject);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
