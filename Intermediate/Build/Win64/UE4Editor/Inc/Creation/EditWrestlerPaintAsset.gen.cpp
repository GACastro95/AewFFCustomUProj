// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Creation/Public/EditWrestlerPaintAsset.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEditWrestlerPaintAsset() {}
// Cross Module References
	CREATION_API UClass* Z_Construct_UClass_UEditWrestlerPaintAsset_NoRegister();
	CREATION_API UClass* Z_Construct_UClass_UEditWrestlerPaintAsset();
	CREATION_API UClass* Z_Construct_UClass_UCustomizeAssetBase();
	UPackage* Z_Construct_UPackage__Script_Creation();
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FColorParameterList();
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FIndexedColorList();
	CREATION_API UEnum* Z_Construct_UEnum_Creation_EEditTexTarget();
	ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UEditWrestlerPaintAsset::execGetColorParameter)
	{
		P_GET_STRUCT_REF(FColorParameterList,Z_Param_Out_Out);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetColorParameter(Z_Param_Out_Out);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditWrestlerPaintAsset::execIsColorChangeable)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsColorChangeable();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditWrestlerPaintAsset::execMakeColorParamList)
	{
		P_GET_STRUCT_REF(FIndexedColorList,Z_Param_Out_In);
		P_GET_STRUCT_REF(FColorParameterList,Z_Param_Out_Out);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MakeColorParamList(Z_Param_Out_In,Z_Param_Out_Out);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditWrestlerPaintAsset::execUpdateColor)
	{
		P_GET_STRUCT_REF(FIndexedColorList,Z_Param_Out_In);
		P_GET_STRUCT_REF(FColorParameterList,Z_Param_Out_Out);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateColor(Z_Param_Out_In,Z_Param_Out_Out);
		P_NATIVE_END;
	}
	void UEditWrestlerPaintAsset::StaticRegisterNativesUEditWrestlerPaintAsset()
	{
		UClass* Class = UEditWrestlerPaintAsset::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetColorParameter", &UEditWrestlerPaintAsset::execGetColorParameter },
			{ "IsColorChangeable", &UEditWrestlerPaintAsset::execIsColorChangeable },
			{ "MakeColorParamList", &UEditWrestlerPaintAsset::execMakeColorParamList },
			{ "UpdateColor", &UEditWrestlerPaintAsset::execUpdateColor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEditWrestlerPaintAsset_GetColorParameter_Statics
	{
		struct EditWrestlerPaintAsset_eventGetColorParameter_Parms
		{
			FColorParameterList Out;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Out;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditWrestlerPaintAsset_GetColorParameter_Statics::NewProp_Out = { "Out", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditWrestlerPaintAsset_eventGetColorParameter_Parms, Out), Z_Construct_UScriptStruct_FColorParameterList, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditWrestlerPaintAsset_GetColorParameter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditWrestlerPaintAsset_GetColorParameter_Statics::NewProp_Out,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditWrestlerPaintAsset_GetColorParameter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EditWrestlerPaintAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditWrestlerPaintAsset_GetColorParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditWrestlerPaintAsset, nullptr, "GetColorParameter", nullptr, nullptr, sizeof(EditWrestlerPaintAsset_eventGetColorParameter_Parms), Z_Construct_UFunction_UEditWrestlerPaintAsset_GetColorParameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditWrestlerPaintAsset_GetColorParameter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditWrestlerPaintAsset_GetColorParameter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditWrestlerPaintAsset_GetColorParameter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditWrestlerPaintAsset_GetColorParameter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditWrestlerPaintAsset_GetColorParameter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditWrestlerPaintAsset_IsColorChangeable_Statics
	{
		struct EditWrestlerPaintAsset_eventIsColorChangeable_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UEditWrestlerPaintAsset_IsColorChangeable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EditWrestlerPaintAsset_eventIsColorChangeable_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditWrestlerPaintAsset_IsColorChangeable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EditWrestlerPaintAsset_eventIsColorChangeable_Parms), &Z_Construct_UFunction_UEditWrestlerPaintAsset_IsColorChangeable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditWrestlerPaintAsset_IsColorChangeable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditWrestlerPaintAsset_IsColorChangeable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditWrestlerPaintAsset_IsColorChangeable_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EditWrestlerPaintAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditWrestlerPaintAsset_IsColorChangeable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditWrestlerPaintAsset, nullptr, "IsColorChangeable", nullptr, nullptr, sizeof(EditWrestlerPaintAsset_eventIsColorChangeable_Parms), Z_Construct_UFunction_UEditWrestlerPaintAsset_IsColorChangeable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditWrestlerPaintAsset_IsColorChangeable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditWrestlerPaintAsset_IsColorChangeable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditWrestlerPaintAsset_IsColorChangeable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditWrestlerPaintAsset_IsColorChangeable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditWrestlerPaintAsset_IsColorChangeable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditWrestlerPaintAsset_MakeColorParamList_Statics
	{
		struct EditWrestlerPaintAsset_eventMakeColorParamList_Parms
		{
			FIndexedColorList In;
			FColorParameterList Out;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_In_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_In;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Out;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditWrestlerPaintAsset_MakeColorParamList_Statics::NewProp_In_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditWrestlerPaintAsset_MakeColorParamList_Statics::NewProp_In = { "In", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditWrestlerPaintAsset_eventMakeColorParamList_Parms, In), Z_Construct_UScriptStruct_FIndexedColorList, METADATA_PARAMS(Z_Construct_UFunction_UEditWrestlerPaintAsset_MakeColorParamList_Statics::NewProp_In_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditWrestlerPaintAsset_MakeColorParamList_Statics::NewProp_In_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditWrestlerPaintAsset_MakeColorParamList_Statics::NewProp_Out = { "Out", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditWrestlerPaintAsset_eventMakeColorParamList_Parms, Out), Z_Construct_UScriptStruct_FColorParameterList, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditWrestlerPaintAsset_MakeColorParamList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditWrestlerPaintAsset_MakeColorParamList_Statics::NewProp_In,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditWrestlerPaintAsset_MakeColorParamList_Statics::NewProp_Out,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditWrestlerPaintAsset_MakeColorParamList_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EditWrestlerPaintAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditWrestlerPaintAsset_MakeColorParamList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditWrestlerPaintAsset, nullptr, "MakeColorParamList", nullptr, nullptr, sizeof(EditWrestlerPaintAsset_eventMakeColorParamList_Parms), Z_Construct_UFunction_UEditWrestlerPaintAsset_MakeColorParamList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditWrestlerPaintAsset_MakeColorParamList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditWrestlerPaintAsset_MakeColorParamList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditWrestlerPaintAsset_MakeColorParamList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditWrestlerPaintAsset_MakeColorParamList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditWrestlerPaintAsset_MakeColorParamList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditWrestlerPaintAsset_UpdateColor_Statics
	{
		struct EditWrestlerPaintAsset_eventUpdateColor_Parms
		{
			FIndexedColorList In;
			FColorParameterList Out;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_In_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_In;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Out;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditWrestlerPaintAsset_UpdateColor_Statics::NewProp_In_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditWrestlerPaintAsset_UpdateColor_Statics::NewProp_In = { "In", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditWrestlerPaintAsset_eventUpdateColor_Parms, In), Z_Construct_UScriptStruct_FIndexedColorList, METADATA_PARAMS(Z_Construct_UFunction_UEditWrestlerPaintAsset_UpdateColor_Statics::NewProp_In_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditWrestlerPaintAsset_UpdateColor_Statics::NewProp_In_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditWrestlerPaintAsset_UpdateColor_Statics::NewProp_Out = { "Out", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditWrestlerPaintAsset_eventUpdateColor_Parms, Out), Z_Construct_UScriptStruct_FColorParameterList, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditWrestlerPaintAsset_UpdateColor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditWrestlerPaintAsset_UpdateColor_Statics::NewProp_In,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditWrestlerPaintAsset_UpdateColor_Statics::NewProp_Out,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditWrestlerPaintAsset_UpdateColor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EditWrestlerPaintAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditWrestlerPaintAsset_UpdateColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditWrestlerPaintAsset, nullptr, "UpdateColor", nullptr, nullptr, sizeof(EditWrestlerPaintAsset_eventUpdateColor_Parms), Z_Construct_UFunction_UEditWrestlerPaintAsset_UpdateColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditWrestlerPaintAsset_UpdateColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditWrestlerPaintAsset_UpdateColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditWrestlerPaintAsset_UpdateColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditWrestlerPaintAsset_UpdateColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditWrestlerPaintAsset_UpdateColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEditWrestlerPaintAsset_NoRegister()
	{
		return UEditWrestlerPaintAsset::StaticClass();
	}
	struct Z_Construct_UClass_UEditWrestlerPaintAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorParameter_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ColorParameter;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Target_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Target;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Items_ValueProp;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Items_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Items_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_Items;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ColorParameterNames_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorParameterNames_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ColorParameterNames;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEditWrestlerPaintAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCustomizeAssetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Creation,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEditWrestlerPaintAsset_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEditWrestlerPaintAsset_GetColorParameter, "GetColorParameter" }, // 1819561315
		{ &Z_Construct_UFunction_UEditWrestlerPaintAsset_IsColorChangeable, "IsColorChangeable" }, // 2817173180
		{ &Z_Construct_UFunction_UEditWrestlerPaintAsset_MakeColorParamList, "MakeColorParamList" }, // 1330198
		{ &Z_Construct_UFunction_UEditWrestlerPaintAsset_UpdateColor, "UpdateColor" }, // 2120708421
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditWrestlerPaintAsset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "EditWrestlerPaintAsset.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/EditWrestlerPaintAsset.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditWrestlerPaintAsset_Statics::NewProp_ColorParameter_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EditWrestlerPaintAsset" },
		{ "ModuleRelativePath", "Public/EditWrestlerPaintAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEditWrestlerPaintAsset_Statics::NewProp_ColorParameter = { "ColorParameter", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEditWrestlerPaintAsset, ColorParameter), Z_Construct_UScriptStruct_FColorParameterList, METADATA_PARAMS(Z_Construct_UClass_UEditWrestlerPaintAsset_Statics::NewProp_ColorParameter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditWrestlerPaintAsset_Statics::NewProp_ColorParameter_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UEditWrestlerPaintAsset_Statics::NewProp_Target_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditWrestlerPaintAsset_Statics::NewProp_Target_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EditWrestlerPaintAsset" },
		{ "ModuleRelativePath", "Public/EditWrestlerPaintAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UEditWrestlerPaintAsset_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEditWrestlerPaintAsset, Target), Z_Construct_UEnum_Creation_EEditTexTarget, METADATA_PARAMS(Z_Construct_UClass_UEditWrestlerPaintAsset_Statics::NewProp_Target_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditWrestlerPaintAsset_Statics::NewProp_Target_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEditWrestlerPaintAsset_Statics::NewProp_Items_ValueProp = { "Items", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UEditWrestlerPaintAsset_Statics::NewProp_Items_Key_KeyProp = { "Items_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditWrestlerPaintAsset_Statics::NewProp_Items_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EditWrestlerPaintAsset" },
		{ "ModuleRelativePath", "Public/EditWrestlerPaintAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UEditWrestlerPaintAsset_Statics::NewProp_Items = { "Items", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEditWrestlerPaintAsset, Items), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEditWrestlerPaintAsset_Statics::NewProp_Items_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditWrestlerPaintAsset_Statics::NewProp_Items_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UEditWrestlerPaintAsset_Statics::NewProp_ColorParameterNames_Inner = { "ColorParameterNames", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditWrestlerPaintAsset_Statics::NewProp_ColorParameterNames_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EditWrestlerPaintAsset" },
		{ "ModuleRelativePath", "Public/EditWrestlerPaintAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEditWrestlerPaintAsset_Statics::NewProp_ColorParameterNames = { "ColorParameterNames", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEditWrestlerPaintAsset, ColorParameterNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEditWrestlerPaintAsset_Statics::NewProp_ColorParameterNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditWrestlerPaintAsset_Statics::NewProp_ColorParameterNames_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEditWrestlerPaintAsset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditWrestlerPaintAsset_Statics::NewProp_ColorParameter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditWrestlerPaintAsset_Statics::NewProp_Target_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditWrestlerPaintAsset_Statics::NewProp_Target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditWrestlerPaintAsset_Statics::NewProp_Items_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditWrestlerPaintAsset_Statics::NewProp_Items_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditWrestlerPaintAsset_Statics::NewProp_Items,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditWrestlerPaintAsset_Statics::NewProp_ColorParameterNames_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditWrestlerPaintAsset_Statics::NewProp_ColorParameterNames,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEditWrestlerPaintAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditWrestlerPaintAsset>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEditWrestlerPaintAsset_Statics::ClassParams = {
		&UEditWrestlerPaintAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UEditWrestlerPaintAsset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UEditWrestlerPaintAsset_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEditWrestlerPaintAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEditWrestlerPaintAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEditWrestlerPaintAsset()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEditWrestlerPaintAsset_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEditWrestlerPaintAsset, 2870803880);
	template<> CREATION_API UClass* StaticClass<UEditWrestlerPaintAsset>()
	{
		return UEditWrestlerPaintAsset::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEditWrestlerPaintAsset(Z_Construct_UClass_UEditWrestlerPaintAsset, &UEditWrestlerPaintAsset::StaticClass, TEXT("/Script/Creation"), TEXT("UEditWrestlerPaintAsset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEditWrestlerPaintAsset);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
