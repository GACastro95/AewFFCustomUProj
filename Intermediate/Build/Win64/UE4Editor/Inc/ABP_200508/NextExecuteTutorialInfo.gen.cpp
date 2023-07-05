// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/NextExecuteTutorialInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNextExecuteTutorialInfo() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FNextExecuteTutorialInfo();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FExecuteTutorialDialogParam();
	ABP_200508_API UFunction* Z_Construct_UDelegateFunction_ABP_200508_TutorialCompleteDelegate__DelegateSignature();
// End Cross Module References
class UScriptStruct* FNextExecuteTutorialInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FNextExecuteTutorialInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNextExecuteTutorialInfo, Z_Construct_UPackage__Script_ABP_200508(), TEXT("NextExecuteTutorialInfo"), sizeof(FNextExecuteTutorialInfo), Get_Z_Construct_UScriptStruct_FNextExecuteTutorialInfo_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FNextExecuteTutorialInfo>()
{
	return FNextExecuteTutorialInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNextExecuteTutorialInfo(FNextExecuteTutorialInfo::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("NextExecuteTutorialInfo"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFNextExecuteTutorialInfo
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFNextExecuteTutorialInfo()
	{
		UScriptStruct::DeferCppStructOps<FNextExecuteTutorialInfo>(FName(TEXT("NextExecuteTutorialInfo")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFNextExecuteTutorialInfo;
	struct Z_Construct_UScriptStruct_FNextExecuteTutorialInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Param_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Param;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SaveDataIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SaveDataIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayDecideBtn_MetaData[];
#endif
		static void NewProp_DisplayDecideBtn_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DisplayDecideBtn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayBottomHelp_MetaData[];
#endif
		static void NewProp_DisplayBottomHelp_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DisplayBottomHelp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnCompleteDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnCompleteDelegate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNextExecuteTutorialInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/NextExecuteTutorialInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNextExecuteTutorialInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNextExecuteTutorialInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNextExecuteTutorialInfo_Statics::NewProp_Param_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "NextExecuteTutorialInfo" },
		{ "ModuleRelativePath", "Public/NextExecuteTutorialInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNextExecuteTutorialInfo_Statics::NewProp_Param = { "Param", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNextExecuteTutorialInfo, Param), Z_Construct_UScriptStruct_FExecuteTutorialDialogParam, METADATA_PARAMS(Z_Construct_UScriptStruct_FNextExecuteTutorialInfo_Statics::NewProp_Param_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNextExecuteTutorialInfo_Statics::NewProp_Param_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNextExecuteTutorialInfo_Statics::NewProp_SaveDataIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "NextExecuteTutorialInfo" },
		{ "ModuleRelativePath", "Public/NextExecuteTutorialInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNextExecuteTutorialInfo_Statics::NewProp_SaveDataIndex = { "SaveDataIndex", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNextExecuteTutorialInfo, SaveDataIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FNextExecuteTutorialInfo_Statics::NewProp_SaveDataIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNextExecuteTutorialInfo_Statics::NewProp_SaveDataIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNextExecuteTutorialInfo_Statics::NewProp_DisplayDecideBtn_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "NextExecuteTutorialInfo" },
		{ "ModuleRelativePath", "Public/NextExecuteTutorialInfo.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNextExecuteTutorialInfo_Statics::NewProp_DisplayDecideBtn_SetBit(void* Obj)
	{
		((FNextExecuteTutorialInfo*)Obj)->DisplayDecideBtn = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNextExecuteTutorialInfo_Statics::NewProp_DisplayDecideBtn = { "DisplayDecideBtn", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FNextExecuteTutorialInfo), &Z_Construct_UScriptStruct_FNextExecuteTutorialInfo_Statics::NewProp_DisplayDecideBtn_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNextExecuteTutorialInfo_Statics::NewProp_DisplayDecideBtn_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNextExecuteTutorialInfo_Statics::NewProp_DisplayDecideBtn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNextExecuteTutorialInfo_Statics::NewProp_DisplayBottomHelp_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "NextExecuteTutorialInfo" },
		{ "ModuleRelativePath", "Public/NextExecuteTutorialInfo.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNextExecuteTutorialInfo_Statics::NewProp_DisplayBottomHelp_SetBit(void* Obj)
	{
		((FNextExecuteTutorialInfo*)Obj)->DisplayBottomHelp = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNextExecuteTutorialInfo_Statics::NewProp_DisplayBottomHelp = { "DisplayBottomHelp", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FNextExecuteTutorialInfo), &Z_Construct_UScriptStruct_FNextExecuteTutorialInfo_Statics::NewProp_DisplayBottomHelp_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNextExecuteTutorialInfo_Statics::NewProp_DisplayBottomHelp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNextExecuteTutorialInfo_Statics::NewProp_DisplayBottomHelp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNextExecuteTutorialInfo_Statics::NewProp_OnCompleteDelegate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "NextExecuteTutorialInfo" },
		{ "ModuleRelativePath", "Public/NextExecuteTutorialInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UScriptStruct_FNextExecuteTutorialInfo_Statics::NewProp_OnCompleteDelegate = { "OnCompleteDelegate", nullptr, (EPropertyFlags)0x0010000000080005, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNextExecuteTutorialInfo, OnCompleteDelegate), Z_Construct_UDelegateFunction_ABP_200508_TutorialCompleteDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UScriptStruct_FNextExecuteTutorialInfo_Statics::NewProp_OnCompleteDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNextExecuteTutorialInfo_Statics::NewProp_OnCompleteDelegate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNextExecuteTutorialInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNextExecuteTutorialInfo_Statics::NewProp_Param,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNextExecuteTutorialInfo_Statics::NewProp_SaveDataIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNextExecuteTutorialInfo_Statics::NewProp_DisplayDecideBtn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNextExecuteTutorialInfo_Statics::NewProp_DisplayBottomHelp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNextExecuteTutorialInfo_Statics::NewProp_OnCompleteDelegate,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNextExecuteTutorialInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"NextExecuteTutorialInfo",
		sizeof(FNextExecuteTutorialInfo),
		alignof(FNextExecuteTutorialInfo),
		Z_Construct_UScriptStruct_FNextExecuteTutorialInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNextExecuteTutorialInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNextExecuteTutorialInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNextExecuteTutorialInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNextExecuteTutorialInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNextExecuteTutorialInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NextExecuteTutorialInfo"), sizeof(FNextExecuteTutorialInfo), Get_Z_Construct_UScriptStruct_FNextExecuteTutorialInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNextExecuteTutorialInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNextExecuteTutorialInfo_Hash() { return 1126263003U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
