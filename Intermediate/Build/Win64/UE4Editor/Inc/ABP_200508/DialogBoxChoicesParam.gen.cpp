// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/DialogBoxChoicesParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDialogBoxChoicesParam() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FDialogBoxChoicesParam();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_yEnDialogBoxChoices();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_yEnDialogBoxResult();
// End Cross Module References

static_assert(std::is_polymorphic<FDialogBoxChoicesParam>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FDialogBoxChoicesParam cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FDialogBoxChoicesParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FDialogBoxChoicesParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDialogBoxChoicesParam, Z_Construct_UPackage__Script_ABP_200508(), TEXT("DialogBoxChoicesParam"), sizeof(FDialogBoxChoicesParam), Get_Z_Construct_UScriptStruct_FDialogBoxChoicesParam_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FDialogBoxChoicesParam>()
{
	return FDialogBoxChoicesParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDialogBoxChoicesParam(FDialogBoxChoicesParam::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("DialogBoxChoicesParam"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFDialogBoxChoicesParam
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFDialogBoxChoicesParam()
	{
		UScriptStruct::DeferCppStructOps<FDialogBoxChoicesParam>(FName(TEXT("DialogBoxChoicesParam")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFDialogBoxChoicesParam;
	struct Z_Construct_UScriptStruct_FDialogBoxChoicesParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_m_Choices_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_Choices_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_m_Choices;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_ChoicesName_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_m_ChoicesName;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_m_Result_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_Result_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_m_Result;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_bCancelable_MetaData[];
#endif
		static void NewProp_m_bCancelable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_m_bCancelable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogBoxChoicesParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DialogBoxChoicesParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDialogBoxChoicesParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDialogBoxChoicesParam>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDialogBoxChoicesParam_Statics::NewProp_m_Choices_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogBoxChoicesParam_Statics::NewProp_m_Choices_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DialogBoxChoicesParam" },
		{ "ModuleRelativePath", "Public/DialogBoxChoicesParam.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FDialogBoxChoicesParam_Statics::NewProp_m_Choices = { "m_Choices", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDialogBoxChoicesParam, m_Choices), Z_Construct_UEnum_ABP_200508_yEnDialogBoxChoices, METADATA_PARAMS(Z_Construct_UScriptStruct_FDialogBoxChoicesParam_Statics::NewProp_m_Choices_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogBoxChoicesParam_Statics::NewProp_m_Choices_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogBoxChoicesParam_Statics::NewProp_m_ChoicesName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DialogBoxChoicesParam" },
		{ "ModuleRelativePath", "Public/DialogBoxChoicesParam.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FDialogBoxChoicesParam_Statics::NewProp_m_ChoicesName = { "m_ChoicesName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDialogBoxChoicesParam, m_ChoicesName), METADATA_PARAMS(Z_Construct_UScriptStruct_FDialogBoxChoicesParam_Statics::NewProp_m_ChoicesName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogBoxChoicesParam_Statics::NewProp_m_ChoicesName_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDialogBoxChoicesParam_Statics::NewProp_m_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogBoxChoicesParam_Statics::NewProp_m_Result_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DialogBoxChoicesParam" },
		{ "ModuleRelativePath", "Public/DialogBoxChoicesParam.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FDialogBoxChoicesParam_Statics::NewProp_m_Result = { "m_Result", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDialogBoxChoicesParam, m_Result), Z_Construct_UEnum_ABP_200508_yEnDialogBoxResult, METADATA_PARAMS(Z_Construct_UScriptStruct_FDialogBoxChoicesParam_Statics::NewProp_m_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogBoxChoicesParam_Statics::NewProp_m_Result_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogBoxChoicesParam_Statics::NewProp_m_bCancelable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DialogBoxChoicesParam" },
		{ "ModuleRelativePath", "Public/DialogBoxChoicesParam.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FDialogBoxChoicesParam_Statics::NewProp_m_bCancelable_SetBit(void* Obj)
	{
		((FDialogBoxChoicesParam*)Obj)->m_bCancelable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDialogBoxChoicesParam_Statics::NewProp_m_bCancelable = { "m_bCancelable", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FDialogBoxChoicesParam), &Z_Construct_UScriptStruct_FDialogBoxChoicesParam_Statics::NewProp_m_bCancelable_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDialogBoxChoicesParam_Statics::NewProp_m_bCancelable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogBoxChoicesParam_Statics::NewProp_m_bCancelable_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDialogBoxChoicesParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogBoxChoicesParam_Statics::NewProp_m_Choices_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogBoxChoicesParam_Statics::NewProp_m_Choices,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogBoxChoicesParam_Statics::NewProp_m_ChoicesName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogBoxChoicesParam_Statics::NewProp_m_Result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogBoxChoicesParam_Statics::NewProp_m_Result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogBoxChoicesParam_Statics::NewProp_m_bCancelable,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDialogBoxChoicesParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"DialogBoxChoicesParam",
		sizeof(FDialogBoxChoicesParam),
		alignof(FDialogBoxChoicesParam),
		Z_Construct_UScriptStruct_FDialogBoxChoicesParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogBoxChoicesParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDialogBoxChoicesParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogBoxChoicesParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDialogBoxChoicesParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDialogBoxChoicesParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DialogBoxChoicesParam"), sizeof(FDialogBoxChoicesParam), Get_Z_Construct_UScriptStruct_FDialogBoxChoicesParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDialogBoxChoicesParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDialogBoxChoicesParam_Hash() { return 2678724408U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
