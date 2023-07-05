// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/SaveData_CareerModeSnapshot.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSaveData_CareerModeSnapshot() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_USaveData_CareerModeSnapshot_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_USaveData_CareerModeSnapshot();
	ELITE_GAME_API UClass* Z_Construct_UClass_UELSaveGameBase();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FCareerSnapshotImage();
// End Cross Module References
	void USaveData_CareerModeSnapshot::StaticRegisterNativesUSaveData_CareerModeSnapshot()
	{
	}
	UClass* Z_Construct_UClass_USaveData_CareerModeSnapshot_NoRegister()
	{
		return USaveData_CareerModeSnapshot::StaticClass();
	}
	struct Z_Construct_UClass_USaveData_CareerModeSnapshot_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SnapshotDataArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SnapshotDataArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SnapshotDataArray;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USaveData_CareerModeSnapshot_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UELSaveGameBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveData_CareerModeSnapshot_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SaveData_CareerModeSnapshot.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SaveData_CareerModeSnapshot.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USaveData_CareerModeSnapshot_Statics::NewProp_SnapshotDataArray_Inner = { "SnapshotDataArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FCareerSnapshotImage, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveData_CareerModeSnapshot_Statics::NewProp_SnapshotDataArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SaveData_CareerModeSnapshot" },
		{ "ModuleRelativePath", "Public/SaveData_CareerModeSnapshot.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USaveData_CareerModeSnapshot_Statics::NewProp_SnapshotDataArray = { "SnapshotDataArray", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USaveData_CareerModeSnapshot, SnapshotDataArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USaveData_CareerModeSnapshot_Statics::NewProp_SnapshotDataArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USaveData_CareerModeSnapshot_Statics::NewProp_SnapshotDataArray_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USaveData_CareerModeSnapshot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveData_CareerModeSnapshot_Statics::NewProp_SnapshotDataArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveData_CareerModeSnapshot_Statics::NewProp_SnapshotDataArray,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USaveData_CareerModeSnapshot_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USaveData_CareerModeSnapshot>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USaveData_CareerModeSnapshot_Statics::ClassParams = {
		&USaveData_CareerModeSnapshot::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USaveData_CareerModeSnapshot_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USaveData_CareerModeSnapshot_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USaveData_CareerModeSnapshot_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USaveData_CareerModeSnapshot_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USaveData_CareerModeSnapshot()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USaveData_CareerModeSnapshot_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USaveData_CareerModeSnapshot, 3764471726);
	template<> ABP_200508_API UClass* StaticClass<USaveData_CareerModeSnapshot>()
	{
		return USaveData_CareerModeSnapshot::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USaveData_CareerModeSnapshot(Z_Construct_UClass_USaveData_CareerModeSnapshot, &USaveData_CareerModeSnapshot::StaticClass, TEXT("/Script/ABP_200508"), TEXT("USaveData_CareerModeSnapshot"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USaveData_CareerModeSnapshot);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
