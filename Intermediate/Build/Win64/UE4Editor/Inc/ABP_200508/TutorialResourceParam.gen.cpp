// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/TutorialResourceParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTutorialResourceParam() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FTutorialResourceParam();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ETutorialDialogType();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
// End Cross Module References
class UScriptStruct* FTutorialResourceParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FTutorialResourceParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTutorialResourceParam, Z_Construct_UPackage__Script_ABP_200508(), TEXT("TutorialResourceParam"), sizeof(FTutorialResourceParam), Get_Z_Construct_UScriptStruct_FTutorialResourceParam_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FTutorialResourceParam>()
{
	return FTutorialResourceParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTutorialResourceParam(FTutorialResourceParam::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("TutorialResourceParam"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFTutorialResourceParam
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFTutorialResourceParam()
	{
		UScriptStruct::DeferCppStructOps<FTutorialResourceParam>(FName(TEXT("TutorialResourceParam")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFTutorialResourceParam;
	struct Z_Construct_UScriptStruct_FTutorialResourceParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Memo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Memo;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DialogType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DialogType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DialogType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeaderText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_HeaderText;
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_PictuerList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PictuerList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PictuerList;
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_TextList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TextList;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovieID_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_MovieID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTutorialResourceParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/TutorialResourceParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTutorialResourceParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTutorialResourceParam>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTutorialResourceParam_Statics::NewProp_Memo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TutorialResourceParam" },
		{ "ModuleRelativePath", "Public/TutorialResourceParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTutorialResourceParam_Statics::NewProp_Memo = { "Memo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTutorialResourceParam, Memo), METADATA_PARAMS(Z_Construct_UScriptStruct_FTutorialResourceParam_Statics::NewProp_Memo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTutorialResourceParam_Statics::NewProp_Memo_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FTutorialResourceParam_Statics::NewProp_DialogType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTutorialResourceParam_Statics::NewProp_DialogType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TutorialResourceParam" },
		{ "ModuleRelativePath", "Public/TutorialResourceParam.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FTutorialResourceParam_Statics::NewProp_DialogType = { "DialogType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTutorialResourceParam, DialogType), Z_Construct_UEnum_ABP_200508_ETutorialDialogType, METADATA_PARAMS(Z_Construct_UScriptStruct_FTutorialResourceParam_Statics::NewProp_DialogType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTutorialResourceParam_Statics::NewProp_DialogType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTutorialResourceParam_Statics::NewProp_HeaderText_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TutorialResourceParam" },
		{ "ModuleRelativePath", "Public/TutorialResourceParam.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FTutorialResourceParam_Statics::NewProp_HeaderText = { "HeaderText", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTutorialResourceParam, HeaderText), METADATA_PARAMS(Z_Construct_UScriptStruct_FTutorialResourceParam_Statics::NewProp_HeaderText_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTutorialResourceParam_Statics::NewProp_HeaderText_MetaData)) };
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FTutorialResourceParam_Statics::NewProp_PictuerList_Inner = { "PictuerList", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTutorialResourceParam_Statics::NewProp_PictuerList_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TutorialResourceParam" },
		{ "ModuleRelativePath", "Public/TutorialResourceParam.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FTutorialResourceParam_Statics::NewProp_PictuerList = { "PictuerList", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTutorialResourceParam, PictuerList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FTutorialResourceParam_Statics::NewProp_PictuerList_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTutorialResourceParam_Statics::NewProp_PictuerList_MetaData)) };
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FTutorialResourceParam_Statics::NewProp_TextList_Inner = { "TextList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTutorialResourceParam_Statics::NewProp_TextList_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TutorialResourceParam" },
		{ "ModuleRelativePath", "Public/TutorialResourceParam.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FTutorialResourceParam_Statics::NewProp_TextList = { "TextList", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTutorialResourceParam, TextList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FTutorialResourceParam_Statics::NewProp_TextList_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTutorialResourceParam_Statics::NewProp_TextList_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTutorialResourceParam_Statics::NewProp_MovieID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TutorialResourceParam" },
		{ "ModuleRelativePath", "Public/TutorialResourceParam.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FTutorialResourceParam_Statics::NewProp_MovieID = { "MovieID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTutorialResourceParam, MovieID), METADATA_PARAMS(Z_Construct_UScriptStruct_FTutorialResourceParam_Statics::NewProp_MovieID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTutorialResourceParam_Statics::NewProp_MovieID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTutorialResourceParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTutorialResourceParam_Statics::NewProp_Memo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTutorialResourceParam_Statics::NewProp_DialogType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTutorialResourceParam_Statics::NewProp_DialogType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTutorialResourceParam_Statics::NewProp_HeaderText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTutorialResourceParam_Statics::NewProp_PictuerList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTutorialResourceParam_Statics::NewProp_PictuerList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTutorialResourceParam_Statics::NewProp_TextList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTutorialResourceParam_Statics::NewProp_TextList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTutorialResourceParam_Statics::NewProp_MovieID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTutorialResourceParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"TutorialResourceParam",
		sizeof(FTutorialResourceParam),
		alignof(FTutorialResourceParam),
		Z_Construct_UScriptStruct_FTutorialResourceParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTutorialResourceParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTutorialResourceParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTutorialResourceParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTutorialResourceParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTutorialResourceParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TutorialResourceParam"), sizeof(FTutorialResourceParam), Get_Z_Construct_UScriptStruct_FTutorialResourceParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTutorialResourceParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTutorialResourceParam_Hash() { return 406722382U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
