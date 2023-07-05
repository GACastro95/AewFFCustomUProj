// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/DialogBoxStackInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDialogBoxStackInfo() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FDialogBoxStackInfo();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UClass* Z_Construct_UClass_UELOperationalWidgetBase_NoRegister();
	ABP_200508_API UFunction* Z_Construct_UDelegateFunction_ABP_200508_DialogBoxResultDelegate__DelegateSignature();
	ABP_200508_API UFunction* Z_Construct_UDelegateFunction_ABP_200508_DialogBoxBeginResultDelegate__DelegateSignature();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_yEnDialogBoxType();
// End Cross Module References
class UScriptStruct* FDialogBoxStackInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FDialogBoxStackInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDialogBoxStackInfo, Z_Construct_UPackage__Script_ABP_200508(), TEXT("DialogBoxStackInfo"), sizeof(FDialogBoxStackInfo), Get_Z_Construct_UScriptStruct_FDialogBoxStackInfo_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FDialogBoxStackInfo>()
{
	return FDialogBoxStackInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDialogBoxStackInfo(FDialogBoxStackInfo::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("DialogBoxStackInfo"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFDialogBoxStackInfo
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFDialogBoxStackInfo()
	{
		UScriptStruct::DeferCppStructOps<FDialogBoxStackInfo>(FName(TEXT("DialogBoxStackInfo")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFDialogBoxStackInfo;
	struct Z_Construct_UScriptStruct_FDialogBoxStackInfo_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ValidSystemDialog_MetaData[];
#endif
		static void NewProp_ValidSystemDialog_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ValidSystemDialog;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResuleDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_ResuleDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BeginResuleDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_BeginResuleDelegate;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DialogType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DialogType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DialogType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogBoxStackInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DialogBoxStackInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDialogBoxStackInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDialogBoxStackInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogBoxStackInfo_Statics::NewProp_DialogWidget_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DialogBoxStackInfo" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DialogBoxStackInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDialogBoxStackInfo_Statics::NewProp_DialogWidget = { "DialogWidget", nullptr, (EPropertyFlags)0x001200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDialogBoxStackInfo, DialogWidget), Z_Construct_UClass_UELOperationalWidgetBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDialogBoxStackInfo_Statics::NewProp_DialogWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogBoxStackInfo_Statics::NewProp_DialogWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogBoxStackInfo_Statics::NewProp_ValidSystemDialog_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DialogBoxStackInfo" },
		{ "ModuleRelativePath", "Public/DialogBoxStackInfo.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FDialogBoxStackInfo_Statics::NewProp_ValidSystemDialog_SetBit(void* Obj)
	{
		((FDialogBoxStackInfo*)Obj)->ValidSystemDialog = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDialogBoxStackInfo_Statics::NewProp_ValidSystemDialog = { "ValidSystemDialog", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FDialogBoxStackInfo), &Z_Construct_UScriptStruct_FDialogBoxStackInfo_Statics::NewProp_ValidSystemDialog_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDialogBoxStackInfo_Statics::NewProp_ValidSystemDialog_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogBoxStackInfo_Statics::NewProp_ValidSystemDialog_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogBoxStackInfo_Statics::NewProp_ResuleDelegate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DialogBoxStackInfo" },
		{ "ModuleRelativePath", "Public/DialogBoxStackInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UScriptStruct_FDialogBoxStackInfo_Statics::NewProp_ResuleDelegate = { "ResuleDelegate", nullptr, (EPropertyFlags)0x0010000000080005, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDialogBoxStackInfo, ResuleDelegate), Z_Construct_UDelegateFunction_ABP_200508_DialogBoxResultDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UScriptStruct_FDialogBoxStackInfo_Statics::NewProp_ResuleDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogBoxStackInfo_Statics::NewProp_ResuleDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogBoxStackInfo_Statics::NewProp_BeginResuleDelegate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DialogBoxStackInfo" },
		{ "ModuleRelativePath", "Public/DialogBoxStackInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UScriptStruct_FDialogBoxStackInfo_Statics::NewProp_BeginResuleDelegate = { "BeginResuleDelegate", nullptr, (EPropertyFlags)0x0010000000080005, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDialogBoxStackInfo, BeginResuleDelegate), Z_Construct_UDelegateFunction_ABP_200508_DialogBoxBeginResultDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UScriptStruct_FDialogBoxStackInfo_Statics::NewProp_BeginResuleDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogBoxStackInfo_Statics::NewProp_BeginResuleDelegate_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDialogBoxStackInfo_Statics::NewProp_DialogType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogBoxStackInfo_Statics::NewProp_DialogType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DialogBoxStackInfo" },
		{ "ModuleRelativePath", "Public/DialogBoxStackInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FDialogBoxStackInfo_Statics::NewProp_DialogType = { "DialogType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDialogBoxStackInfo, DialogType), Z_Construct_UEnum_ABP_200508_yEnDialogBoxType, METADATA_PARAMS(Z_Construct_UScriptStruct_FDialogBoxStackInfo_Statics::NewProp_DialogType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogBoxStackInfo_Statics::NewProp_DialogType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDialogBoxStackInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogBoxStackInfo_Statics::NewProp_DialogWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogBoxStackInfo_Statics::NewProp_ValidSystemDialog,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogBoxStackInfo_Statics::NewProp_ResuleDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogBoxStackInfo_Statics::NewProp_BeginResuleDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogBoxStackInfo_Statics::NewProp_DialogType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogBoxStackInfo_Statics::NewProp_DialogType,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDialogBoxStackInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"DialogBoxStackInfo",
		sizeof(FDialogBoxStackInfo),
		alignof(FDialogBoxStackInfo),
		Z_Construct_UScriptStruct_FDialogBoxStackInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogBoxStackInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDialogBoxStackInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogBoxStackInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDialogBoxStackInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDialogBoxStackInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DialogBoxStackInfo"), sizeof(FDialogBoxStackInfo), Get_Z_Construct_UScriptStruct_FDialogBoxStackInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDialogBoxStackInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDialogBoxStackInfo_Hash() { return 5170043U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
