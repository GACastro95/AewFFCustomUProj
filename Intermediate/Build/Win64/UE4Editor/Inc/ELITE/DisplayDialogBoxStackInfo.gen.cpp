// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE/Public/DisplayDialogBoxStackInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDisplayDialogBoxStackInfo() {}
// Cross Module References
	ELITE_API UScriptStruct* Z_Construct_UScriptStruct_FDisplayDialogBoxStackInfo();
	UPackage* Z_Construct_UPackage__Script_ELITE();
	ABP_200508_API UClass* Z_Construct_UClass_UELOperationalWidgetBase_NoRegister();
	ABP_200508_API UFunction* Z_Construct_UDelegateFunction_ABP_200508_DialogBoxResultDelegate__DelegateSignature();
	ABP_200508_API UFunction* Z_Construct_UDelegateFunction_ABP_200508_DialogBoxBeginResultDelegate__DelegateSignature();
// End Cross Module References
class UScriptStruct* FDisplayDialogBoxStackInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ELITE_API uint32 Get_Z_Construct_UScriptStruct_FDisplayDialogBoxStackInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDisplayDialogBoxStackInfo, Z_Construct_UPackage__Script_ELITE(), TEXT("DisplayDialogBoxStackInfo"), sizeof(FDisplayDialogBoxStackInfo), Get_Z_Construct_UScriptStruct_FDisplayDialogBoxStackInfo_Hash());
	}
	return Singleton;
}
template<> ELITE_API UScriptStruct* StaticStruct<FDisplayDialogBoxStackInfo>()
{
	return FDisplayDialogBoxStackInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDisplayDialogBoxStackInfo(FDisplayDialogBoxStackInfo::StaticStruct, TEXT("/Script/ELITE"), TEXT("DisplayDialogBoxStackInfo"), false, nullptr, nullptr);
static struct FScriptStruct_ELITE_StaticRegisterNativesFDisplayDialogBoxStackInfo
{
	FScriptStruct_ELITE_StaticRegisterNativesFDisplayDialogBoxStackInfo()
	{
		UScriptStruct::DeferCppStructOps<FDisplayDialogBoxStackInfo>(FName(TEXT("DisplayDialogBoxStackInfo")));
	}
} ScriptStruct_ELITE_StaticRegisterNativesFDisplayDialogBoxStackInfo;
	struct Z_Construct_UScriptStruct_FDisplayDialogBoxStackInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DialogWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DialogWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResuleDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_ResuleDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BeginResuleDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_BeginResuleDelegate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayDialogBoxStackInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DisplayDialogBoxStackInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDisplayDialogBoxStackInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDisplayDialogBoxStackInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayDialogBoxStackInfo_Statics::NewProp_DialogWidget_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DisplayDialogBoxStackInfo" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DisplayDialogBoxStackInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDisplayDialogBoxStackInfo_Statics::NewProp_DialogWidget = { "DialogWidget", nullptr, (EPropertyFlags)0x001200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDisplayDialogBoxStackInfo, DialogWidget), Z_Construct_UClass_UELOperationalWidgetBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayDialogBoxStackInfo_Statics::NewProp_DialogWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayDialogBoxStackInfo_Statics::NewProp_DialogWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayDialogBoxStackInfo_Statics::NewProp_ResuleDelegate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DisplayDialogBoxStackInfo" },
		{ "ModuleRelativePath", "Public/DisplayDialogBoxStackInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UScriptStruct_FDisplayDialogBoxStackInfo_Statics::NewProp_ResuleDelegate = { "ResuleDelegate", nullptr, (EPropertyFlags)0x0010000000080005, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDisplayDialogBoxStackInfo, ResuleDelegate), Z_Construct_UDelegateFunction_ABP_200508_DialogBoxResultDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayDialogBoxStackInfo_Statics::NewProp_ResuleDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayDialogBoxStackInfo_Statics::NewProp_ResuleDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayDialogBoxStackInfo_Statics::NewProp_BeginResuleDelegate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DisplayDialogBoxStackInfo" },
		{ "ModuleRelativePath", "Public/DisplayDialogBoxStackInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UScriptStruct_FDisplayDialogBoxStackInfo_Statics::NewProp_BeginResuleDelegate = { "BeginResuleDelegate", nullptr, (EPropertyFlags)0x0010000000080005, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDisplayDialogBoxStackInfo, BeginResuleDelegate), Z_Construct_UDelegateFunction_ABP_200508_DialogBoxBeginResultDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayDialogBoxStackInfo_Statics::NewProp_BeginResuleDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayDialogBoxStackInfo_Statics::NewProp_BeginResuleDelegate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDisplayDialogBoxStackInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayDialogBoxStackInfo_Statics::NewProp_DialogWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayDialogBoxStackInfo_Statics::NewProp_ResuleDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayDialogBoxStackInfo_Statics::NewProp_BeginResuleDelegate,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDisplayDialogBoxStackInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ELITE,
		nullptr,
		&NewStructOps,
		"DisplayDialogBoxStackInfo",
		sizeof(FDisplayDialogBoxStackInfo),
		alignof(FDisplayDialogBoxStackInfo),
		Z_Construct_UScriptStruct_FDisplayDialogBoxStackInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayDialogBoxStackInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayDialogBoxStackInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayDialogBoxStackInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDisplayDialogBoxStackInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDisplayDialogBoxStackInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ELITE();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DisplayDialogBoxStackInfo"), sizeof(FDisplayDialogBoxStackInfo), Get_Z_Construct_UScriptStruct_FDisplayDialogBoxStackInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDisplayDialogBoxStackInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDisplayDialogBoxStackInfo_Hash() { return 643194823U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
