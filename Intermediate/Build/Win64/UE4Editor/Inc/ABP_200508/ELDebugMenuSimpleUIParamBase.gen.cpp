// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELDebugMenuSimpleUIParamBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELDebugMenuSimpleUIParamBase() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FELDebugMenuSimpleUIParamBase();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EELDebugMenuSimpleUIType();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
// End Cross Module References
class UScriptStruct* FELDebugMenuSimpleUIParamBase::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FELDebugMenuSimpleUIParamBase_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FELDebugMenuSimpleUIParamBase, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ELDebugMenuSimpleUIParamBase"), sizeof(FELDebugMenuSimpleUIParamBase), Get_Z_Construct_UScriptStruct_FELDebugMenuSimpleUIParamBase_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FELDebugMenuSimpleUIParamBase>()
{
	return FELDebugMenuSimpleUIParamBase::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FELDebugMenuSimpleUIParamBase(FELDebugMenuSimpleUIParamBase::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("ELDebugMenuSimpleUIParamBase"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFELDebugMenuSimpleUIParamBase
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFELDebugMenuSimpleUIParamBase()
	{
		UScriptStruct::DeferCppStructOps<FELDebugMenuSimpleUIParamBase>(FName(TEXT("ELDebugMenuSimpleUIParamBase")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFELDebugMenuSimpleUIParamBase;
	struct Z_Construct_UScriptStruct_FELDebugMenuSimpleUIParamBase_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Type;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShowUI_MetaData[];
#endif
		static void NewProp_ShowUI_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ShowUI;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Disabled_MetaData[];
#endif
		static void NewProp_Disabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Disabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Label_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Label;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StringTableNameSpace_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StringTableNameSpace;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DefaultValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Text;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultText_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DefaultText;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ListItems_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ListItems_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ListItems;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UIColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UIColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseUIColor_MetaData[];
#endif
		static void NewProp_UseUIColor_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseUIColor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELDebugMenuSimpleUIParamBase_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ELDebugMenuSimpleUIParamBase.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FELDebugMenuSimpleUIParamBase_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FELDebugMenuSimpleUIParamBase>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FELDebugMenuSimpleUIParamBase_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELDebugMenuSimpleUIParamBase_Statics::NewProp_Type_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELDebugMenuSimpleUIParamBase" },
		{ "ModuleRelativePath", "Public/ELDebugMenuSimpleUIParamBase.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FELDebugMenuSimpleUIParamBase_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELDebugMenuSimpleUIParamBase, Type), Z_Construct_UEnum_ABP_200508_EELDebugMenuSimpleUIType, METADATA_PARAMS(Z_Construct_UScriptStruct_FELDebugMenuSimpleUIParamBase_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELDebugMenuSimpleUIParamBase_Statics::NewProp_Type_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELDebugMenuSimpleUIParamBase_Statics::NewProp_ShowUI_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELDebugMenuSimpleUIParamBase" },
		{ "ModuleRelativePath", "Public/ELDebugMenuSimpleUIParamBase.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FELDebugMenuSimpleUIParamBase_Statics::NewProp_ShowUI_SetBit(void* Obj)
	{
		((FELDebugMenuSimpleUIParamBase*)Obj)->ShowUI = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FELDebugMenuSimpleUIParamBase_Statics::NewProp_ShowUI = { "ShowUI", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELDebugMenuSimpleUIParamBase), &Z_Construct_UScriptStruct_FELDebugMenuSimpleUIParamBase_Statics::NewProp_ShowUI_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FELDebugMenuSimpleUIParamBase_Statics::NewProp_ShowUI_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELDebugMenuSimpleUIParamBase_Statics::NewProp_ShowUI_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELDebugMenuSimpleUIParamBase_Statics::NewProp_Disabled_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELDebugMenuSimpleUIParamBase" },
		{ "ModuleRelativePath", "Public/ELDebugMenuSimpleUIParamBase.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FELDebugMenuSimpleUIParamBase_Statics::NewProp_Disabled_SetBit(void* Obj)
	{
		((FELDebugMenuSimpleUIParamBase*)Obj)->Disabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FELDebugMenuSimpleUIParamBase_Statics::NewProp_Disabled = { "Disabled", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELDebugMenuSimpleUIParamBase), &Z_Construct_UScriptStruct_FELDebugMenuSimpleUIParamBase_Statics::NewProp_Disabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FELDebugMenuSimpleUIParamBase_Statics::NewProp_Disabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELDebugMenuSimpleUIParamBase_Statics::NewProp_Disabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELDebugMenuSimpleUIParamBase_Statics::NewProp_Label_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELDebugMenuSimpleUIParamBase" },
		{ "ModuleRelativePath", "Public/ELDebugMenuSimpleUIParamBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FELDebugMenuSimpleUIParamBase_Statics::NewProp_Label = { "Label", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELDebugMenuSimpleUIParamBase, Label), METADATA_PARAMS(Z_Construct_UScriptStruct_FELDebugMenuSimpleUIParamBase_Statics::NewProp_Label_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELDebugMenuSimpleUIParamBase_Statics::NewProp_Label_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELDebugMenuSimpleUIParamBase_Statics::NewProp_StringTableNameSpace_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELDebugMenuSimpleUIParamBase" },
		{ "ModuleRelativePath", "Public/ELDebugMenuSimpleUIParamBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FELDebugMenuSimpleUIParamBase_Statics::NewProp_StringTableNameSpace = { "StringTableNameSpace", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELDebugMenuSimpleUIParamBase, StringTableNameSpace), METADATA_PARAMS(Z_Construct_UScriptStruct_FELDebugMenuSimpleUIParamBase_Statics::NewProp_StringTableNameSpace_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELDebugMenuSimpleUIParamBase_Statics::NewProp_StringTableNameSpace_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELDebugMenuSimpleUIParamBase_Statics::NewProp_Value_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELDebugMenuSimpleUIParamBase" },
		{ "ModuleRelativePath", "Public/ELDebugMenuSimpleUIParamBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FELDebugMenuSimpleUIParamBase_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELDebugMenuSimpleUIParamBase, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FELDebugMenuSimpleUIParamBase_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELDebugMenuSimpleUIParamBase_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELDebugMenuSimpleUIParamBase_Statics::NewProp_DefaultValue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELDebugMenuSimpleUIParamBase" },
		{ "ModuleRelativePath", "Public/ELDebugMenuSimpleUIParamBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FELDebugMenuSimpleUIParamBase_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELDebugMenuSimpleUIParamBase, DefaultValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FELDebugMenuSimpleUIParamBase_Statics::NewProp_DefaultValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELDebugMenuSimpleUIParamBase_Statics::NewProp_DefaultValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELDebugMenuSimpleUIParamBase_Statics::NewProp_MinValue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELDebugMenuSimpleUIParamBase" },
		{ "ModuleRelativePath", "Public/ELDebugMenuSimpleUIParamBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FELDebugMenuSimpleUIParamBase_Statics::NewProp_MinValue = { "MinValue", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELDebugMenuSimpleUIParamBase, MinValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FELDebugMenuSimpleUIParamBase_Statics::NewProp_MinValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELDebugMenuSimpleUIParamBase_Statics::NewProp_MinValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELDebugMenuSimpleUIParamBase_Statics::NewProp_MaxValue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELDebugMenuSimpleUIParamBase" },
		{ "ModuleRelativePath", "Public/ELDebugMenuSimpleUIParamBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FELDebugMenuSimpleUIParamBase_Statics::NewProp_MaxValue = { "MaxValue", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELDebugMenuSimpleUIParamBase, MaxValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FELDebugMenuSimpleUIParamBase_Statics::NewProp_MaxValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELDebugMenuSimpleUIParamBase_Statics::NewProp_MaxValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELDebugMenuSimpleUIParamBase_Statics::NewProp_Text_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELDebugMenuSimpleUIParamBase" },
		{ "ModuleRelativePath", "Public/ELDebugMenuSimpleUIParamBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FELDebugMenuSimpleUIParamBase_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELDebugMenuSimpleUIParamBase, Text), METADATA_PARAMS(Z_Construct_UScriptStruct_FELDebugMenuSimpleUIParamBase_Statics::NewProp_Text_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELDebugMenuSimpleUIParamBase_Statics::NewProp_Text_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELDebugMenuSimpleUIParamBase_Statics::NewProp_DefaultText_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELDebugMenuSimpleUIParamBase" },
		{ "ModuleRelativePath", "Public/ELDebugMenuSimpleUIParamBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FELDebugMenuSimpleUIParamBase_Statics::NewProp_DefaultText = { "DefaultText", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELDebugMenuSimpleUIParamBase, DefaultText), METADATA_PARAMS(Z_Construct_UScriptStruct_FELDebugMenuSimpleUIParamBase_Statics::NewProp_DefaultText_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELDebugMenuSimpleUIParamBase_Statics::NewProp_DefaultText_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FELDebugMenuSimpleUIParamBase_Statics::NewProp_ListItems_Inner = { "ListItems", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELDebugMenuSimpleUIParamBase_Statics::NewProp_ListItems_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELDebugMenuSimpleUIParamBase" },
		{ "ModuleRelativePath", "Public/ELDebugMenuSimpleUIParamBase.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FELDebugMenuSimpleUIParamBase_Statics::NewProp_ListItems = { "ListItems", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELDebugMenuSimpleUIParamBase, ListItems), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FELDebugMenuSimpleUIParamBase_Statics::NewProp_ListItems_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELDebugMenuSimpleUIParamBase_Statics::NewProp_ListItems_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELDebugMenuSimpleUIParamBase_Statics::NewProp_UIColor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELDebugMenuSimpleUIParamBase" },
		{ "ModuleRelativePath", "Public/ELDebugMenuSimpleUIParamBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FELDebugMenuSimpleUIParamBase_Statics::NewProp_UIColor = { "UIColor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELDebugMenuSimpleUIParamBase, UIColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FELDebugMenuSimpleUIParamBase_Statics::NewProp_UIColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELDebugMenuSimpleUIParamBase_Statics::NewProp_UIColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELDebugMenuSimpleUIParamBase_Statics::NewProp_UseUIColor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELDebugMenuSimpleUIParamBase" },
		{ "ModuleRelativePath", "Public/ELDebugMenuSimpleUIParamBase.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FELDebugMenuSimpleUIParamBase_Statics::NewProp_UseUIColor_SetBit(void* Obj)
	{
		((FELDebugMenuSimpleUIParamBase*)Obj)->UseUIColor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FELDebugMenuSimpleUIParamBase_Statics::NewProp_UseUIColor = { "UseUIColor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELDebugMenuSimpleUIParamBase), &Z_Construct_UScriptStruct_FELDebugMenuSimpleUIParamBase_Statics::NewProp_UseUIColor_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FELDebugMenuSimpleUIParamBase_Statics::NewProp_UseUIColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELDebugMenuSimpleUIParamBase_Statics::NewProp_UseUIColor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FELDebugMenuSimpleUIParamBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELDebugMenuSimpleUIParamBase_Statics::NewProp_Type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELDebugMenuSimpleUIParamBase_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELDebugMenuSimpleUIParamBase_Statics::NewProp_ShowUI,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELDebugMenuSimpleUIParamBase_Statics::NewProp_Disabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELDebugMenuSimpleUIParamBase_Statics::NewProp_Label,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELDebugMenuSimpleUIParamBase_Statics::NewProp_StringTableNameSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELDebugMenuSimpleUIParamBase_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELDebugMenuSimpleUIParamBase_Statics::NewProp_DefaultValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELDebugMenuSimpleUIParamBase_Statics::NewProp_MinValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELDebugMenuSimpleUIParamBase_Statics::NewProp_MaxValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELDebugMenuSimpleUIParamBase_Statics::NewProp_Text,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELDebugMenuSimpleUIParamBase_Statics::NewProp_DefaultText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELDebugMenuSimpleUIParamBase_Statics::NewProp_ListItems_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELDebugMenuSimpleUIParamBase_Statics::NewProp_ListItems,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELDebugMenuSimpleUIParamBase_Statics::NewProp_UIColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELDebugMenuSimpleUIParamBase_Statics::NewProp_UseUIColor,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FELDebugMenuSimpleUIParamBase_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"ELDebugMenuSimpleUIParamBase",
		sizeof(FELDebugMenuSimpleUIParamBase),
		alignof(FELDebugMenuSimpleUIParamBase),
		Z_Construct_UScriptStruct_FELDebugMenuSimpleUIParamBase_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELDebugMenuSimpleUIParamBase_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FELDebugMenuSimpleUIParamBase_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELDebugMenuSimpleUIParamBase_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FELDebugMenuSimpleUIParamBase()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FELDebugMenuSimpleUIParamBase_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ELDebugMenuSimpleUIParamBase"), sizeof(FELDebugMenuSimpleUIParamBase), Get_Z_Construct_UScriptStruct_FELDebugMenuSimpleUIParamBase_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FELDebugMenuSimpleUIParamBase_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FELDebugMenuSimpleUIParamBase_Hash() { return 2854237876U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
