// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/SaveData_JukeBox.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSaveData_JukeBox() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_USaveData_JukeBox_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_USaveData_JukeBox();
	ELITE_GAME_API UClass* Z_Construct_UClass_UELSaveGameBase();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	void USaveData_JukeBox::StaticRegisterNativesUSaveData_JukeBox()
	{
	}
	UClass* Z_Construct_UClass_USaveData_JukeBox_NoRegister()
	{
		return USaveData_JukeBox::StaticClass();
	}
	struct Z_Construct_UClass_USaveData_JukeBox_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_sEnableJukeBoxArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_m_sEnableJukeBoxArray;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_sJukeBoxPlayedListArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_m_sJukeBoxPlayedListArray;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_sJukeBoxPlaylistSortNumArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_m_sJukeBoxPlaylistSortNumArray;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_bRandomPlayback_MetaData[];
#endif
		static void NewProp_m_bRandomPlayback_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_m_bRandomPlayback;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_bCreateSavedata_MetaData[];
#endif
		static void NewProp_m_bCreateSavedata_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_m_bCreateSavedata;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USaveData_JukeBox_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UELSaveGameBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveData_JukeBox_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SaveData_JukeBox.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SaveData_JukeBox.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveData_JukeBox_Statics::NewProp_m_sEnableJukeBoxArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SaveData_JukeBox" },
		{ "ModuleRelativePath", "Public/SaveData_JukeBox.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USaveData_JukeBox_Statics::NewProp_m_sEnableJukeBoxArray = { "m_sEnableJukeBoxArray", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(m_sEnableJukeBoxArray, USaveData_JukeBox), STRUCT_OFFSET(USaveData_JukeBox, m_sEnableJukeBoxArray), METADATA_PARAMS(Z_Construct_UClass_USaveData_JukeBox_Statics::NewProp_m_sEnableJukeBoxArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USaveData_JukeBox_Statics::NewProp_m_sEnableJukeBoxArray_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveData_JukeBox_Statics::NewProp_m_sJukeBoxPlayedListArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SaveData_JukeBox" },
		{ "ModuleRelativePath", "Public/SaveData_JukeBox.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USaveData_JukeBox_Statics::NewProp_m_sJukeBoxPlayedListArray = { "m_sJukeBoxPlayedListArray", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(m_sJukeBoxPlayedListArray, USaveData_JukeBox), STRUCT_OFFSET(USaveData_JukeBox, m_sJukeBoxPlayedListArray), METADATA_PARAMS(Z_Construct_UClass_USaveData_JukeBox_Statics::NewProp_m_sJukeBoxPlayedListArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USaveData_JukeBox_Statics::NewProp_m_sJukeBoxPlayedListArray_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveData_JukeBox_Statics::NewProp_m_sJukeBoxPlaylistSortNumArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SaveData_JukeBox" },
		{ "ModuleRelativePath", "Public/SaveData_JukeBox.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USaveData_JukeBox_Statics::NewProp_m_sJukeBoxPlaylistSortNumArray = { "m_sJukeBoxPlaylistSortNumArray", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(m_sJukeBoxPlaylistSortNumArray, USaveData_JukeBox), STRUCT_OFFSET(USaveData_JukeBox, m_sJukeBoxPlaylistSortNumArray), METADATA_PARAMS(Z_Construct_UClass_USaveData_JukeBox_Statics::NewProp_m_sJukeBoxPlaylistSortNumArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USaveData_JukeBox_Statics::NewProp_m_sJukeBoxPlaylistSortNumArray_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveData_JukeBox_Statics::NewProp_m_bRandomPlayback_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SaveData_JukeBox" },
		{ "ModuleRelativePath", "Public/SaveData_JukeBox.h" },
	};
#endif
	void Z_Construct_UClass_USaveData_JukeBox_Statics::NewProp_m_bRandomPlayback_SetBit(void* Obj)
	{
		((USaveData_JukeBox*)Obj)->m_bRandomPlayback = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USaveData_JukeBox_Statics::NewProp_m_bRandomPlayback = { "m_bRandomPlayback", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USaveData_JukeBox), &Z_Construct_UClass_USaveData_JukeBox_Statics::NewProp_m_bRandomPlayback_SetBit, METADATA_PARAMS(Z_Construct_UClass_USaveData_JukeBox_Statics::NewProp_m_bRandomPlayback_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USaveData_JukeBox_Statics::NewProp_m_bRandomPlayback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveData_JukeBox_Statics::NewProp_m_bCreateSavedata_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SaveData_JukeBox" },
		{ "ModuleRelativePath", "Public/SaveData_JukeBox.h" },
	};
#endif
	void Z_Construct_UClass_USaveData_JukeBox_Statics::NewProp_m_bCreateSavedata_SetBit(void* Obj)
	{
		((USaveData_JukeBox*)Obj)->m_bCreateSavedata = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USaveData_JukeBox_Statics::NewProp_m_bCreateSavedata = { "m_bCreateSavedata", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USaveData_JukeBox), &Z_Construct_UClass_USaveData_JukeBox_Statics::NewProp_m_bCreateSavedata_SetBit, METADATA_PARAMS(Z_Construct_UClass_USaveData_JukeBox_Statics::NewProp_m_bCreateSavedata_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USaveData_JukeBox_Statics::NewProp_m_bCreateSavedata_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USaveData_JukeBox_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveData_JukeBox_Statics::NewProp_m_sEnableJukeBoxArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveData_JukeBox_Statics::NewProp_m_sJukeBoxPlayedListArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveData_JukeBox_Statics::NewProp_m_sJukeBoxPlaylistSortNumArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveData_JukeBox_Statics::NewProp_m_bRandomPlayback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveData_JukeBox_Statics::NewProp_m_bCreateSavedata,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USaveData_JukeBox_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USaveData_JukeBox>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USaveData_JukeBox_Statics::ClassParams = {
		&USaveData_JukeBox::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USaveData_JukeBox_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USaveData_JukeBox_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USaveData_JukeBox_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USaveData_JukeBox_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USaveData_JukeBox()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USaveData_JukeBox_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USaveData_JukeBox, 2946384211);
	template<> ABP_200508_API UClass* StaticClass<USaveData_JukeBox>()
	{
		return USaveData_JukeBox::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USaveData_JukeBox(Z_Construct_UClass_USaveData_JukeBox, &USaveData_JukeBox::StaticClass, TEXT("/Script/ABP_200508"), TEXT("USaveData_JukeBox"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USaveData_JukeBox);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
