// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE_Game/Public/EditWrestlerCareerUtilityFunction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEditWrestlerCareerUtilityFunction() {}
// Cross Module References
	ELITE_GAME_API UClass* Z_Construct_UClass_UEditWrestlerCareerUtilityFunction_NoRegister();
	ELITE_GAME_API UClass* Z_Construct_UClass_UEditWrestlerCareerUtilityFunction();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_ELITE_Game();
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FPersonalityParam();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EPersonalityBitParamType();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EPersonalityIntParamType();
// End Cross Module References
	DEFINE_FUNCTION(UEditWrestlerCareerUtilityFunction::execGetBitParam)
	{
		P_GET_STRUCT_REF(FPersonalityParam,Z_Param_Out_Param);
		P_GET_ENUM(EPersonalityBitParamType,Z_Param_Type);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UEditWrestlerCareerUtilityFunction::GetBitParam(Z_Param_Out_Param,EPersonalityBitParamType(Z_Param_Type));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditWrestlerCareerUtilityFunction::execGetBitParams)
	{
		P_GET_STRUCT_REF(FPersonalityParam,Z_Param_Out_Param);
		P_GET_TSET(EPersonalityBitParamType,Z_Param_List);
		P_FINISH;
		P_NATIVE_BEGIN;
		UEditWrestlerCareerUtilityFunction::GetBitParams(Z_Param_Out_Param,Z_Param_List);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditWrestlerCareerUtilityFunction::execGetIntParam)
	{
		P_GET_STRUCT_REF(FPersonalityParam,Z_Param_Out_Param);
		P_GET_ENUM(EPersonalityIntParamType,Z_Param_Type);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UEditWrestlerCareerUtilityFunction::GetIntParam(Z_Param_Out_Param,EPersonalityIntParamType(Z_Param_Type));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditWrestlerCareerUtilityFunction::execSetBitParam)
	{
		P_GET_STRUCT_REF(FPersonalityParam,Z_Param_Out_Param);
		P_GET_ENUM(EPersonalityBitParamType,Z_Param_Type);
		P_GET_UBOOL(Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		UEditWrestlerCareerUtilityFunction::SetBitParam(Z_Param_Out_Param,EPersonalityBitParamType(Z_Param_Type),Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditWrestlerCareerUtilityFunction::execSetIntParam)
	{
		P_GET_STRUCT_REF(FPersonalityParam,Z_Param_Out_Param);
		P_GET_ENUM(EPersonalityIntParamType,Z_Param_Type);
		P_GET_PROPERTY(FIntProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		UEditWrestlerCareerUtilityFunction::SetIntParam(Z_Param_Out_Param,EPersonalityIntParamType(Z_Param_Type),Z_Param_Value);
		P_NATIVE_END;
	}
	void UEditWrestlerCareerUtilityFunction::StaticRegisterNativesUEditWrestlerCareerUtilityFunction()
	{
		UClass* Class = UEditWrestlerCareerUtilityFunction::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetBitParam", &UEditWrestlerCareerUtilityFunction::execGetBitParam },
			{ "GetBitParams", &UEditWrestlerCareerUtilityFunction::execGetBitParams },
			{ "GetIntParam", &UEditWrestlerCareerUtilityFunction::execGetIntParam },
			{ "SetBitParam", &UEditWrestlerCareerUtilityFunction::execSetBitParam },
			{ "SetIntParam", &UEditWrestlerCareerUtilityFunction::execSetIntParam },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEditWrestlerCareerUtilityFunction_GetBitParam_Statics
	{
		struct EditWrestlerCareerUtilityFunction_eventGetBitParam_Parms
		{
			FPersonalityParam Param;
			EPersonalityBitParamType Type;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Param_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Param;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Type;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditWrestlerCareerUtilityFunction_GetBitParam_Statics::NewProp_Param_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditWrestlerCareerUtilityFunction_GetBitParam_Statics::NewProp_Param = { "Param", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditWrestlerCareerUtilityFunction_eventGetBitParam_Parms, Param), Z_Construct_UScriptStruct_FPersonalityParam, METADATA_PARAMS(Z_Construct_UFunction_UEditWrestlerCareerUtilityFunction_GetBitParam_Statics::NewProp_Param_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditWrestlerCareerUtilityFunction_GetBitParam_Statics::NewProp_Param_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEditWrestlerCareerUtilityFunction_GetBitParam_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditWrestlerCareerUtilityFunction_GetBitParam_Statics::NewProp_Type_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEditWrestlerCareerUtilityFunction_GetBitParam_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditWrestlerCareerUtilityFunction_eventGetBitParam_Parms, Type), Z_Construct_UEnum_ELITE_Game_EPersonalityBitParamType, METADATA_PARAMS(Z_Construct_UFunction_UEditWrestlerCareerUtilityFunction_GetBitParam_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditWrestlerCareerUtilityFunction_GetBitParam_Statics::NewProp_Type_MetaData)) };
	void Z_Construct_UFunction_UEditWrestlerCareerUtilityFunction_GetBitParam_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EditWrestlerCareerUtilityFunction_eventGetBitParam_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditWrestlerCareerUtilityFunction_GetBitParam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EditWrestlerCareerUtilityFunction_eventGetBitParam_Parms), &Z_Construct_UFunction_UEditWrestlerCareerUtilityFunction_GetBitParam_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditWrestlerCareerUtilityFunction_GetBitParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditWrestlerCareerUtilityFunction_GetBitParam_Statics::NewProp_Param,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditWrestlerCareerUtilityFunction_GetBitParam_Statics::NewProp_Type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditWrestlerCareerUtilityFunction_GetBitParam_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditWrestlerCareerUtilityFunction_GetBitParam_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditWrestlerCareerUtilityFunction_GetBitParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EditWrestlerCareerUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditWrestlerCareerUtilityFunction_GetBitParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditWrestlerCareerUtilityFunction, nullptr, "GetBitParam", nullptr, nullptr, sizeof(EditWrestlerCareerUtilityFunction_eventGetBitParam_Parms), Z_Construct_UFunction_UEditWrestlerCareerUtilityFunction_GetBitParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditWrestlerCareerUtilityFunction_GetBitParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditWrestlerCareerUtilityFunction_GetBitParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditWrestlerCareerUtilityFunction_GetBitParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditWrestlerCareerUtilityFunction_GetBitParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditWrestlerCareerUtilityFunction_GetBitParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditWrestlerCareerUtilityFunction_GetBitParams_Statics
	{
		struct EditWrestlerCareerUtilityFunction_eventGetBitParams_Parms
		{
			FPersonalityParam Param;
			TSet<EPersonalityBitParamType> List;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Param_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Param;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_List_ElementProp_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_List_ElementProp;
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_List;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditWrestlerCareerUtilityFunction_GetBitParams_Statics::NewProp_Param_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditWrestlerCareerUtilityFunction_GetBitParams_Statics::NewProp_Param = { "Param", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditWrestlerCareerUtilityFunction_eventGetBitParams_Parms, Param), Z_Construct_UScriptStruct_FPersonalityParam, METADATA_PARAMS(Z_Construct_UFunction_UEditWrestlerCareerUtilityFunction_GetBitParams_Statics::NewProp_Param_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditWrestlerCareerUtilityFunction_GetBitParams_Statics::NewProp_Param_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEditWrestlerCareerUtilityFunction_GetBitParams_Statics::NewProp_List_ElementProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEditWrestlerCareerUtilityFunction_GetBitParams_Statics::NewProp_List_ElementProp = { "List", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_ELITE_Game_EPersonalityBitParamType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UFunction_UEditWrestlerCareerUtilityFunction_GetBitParams_Statics::NewProp_List = { "List", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditWrestlerCareerUtilityFunction_eventGetBitParams_Parms, List), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditWrestlerCareerUtilityFunction_GetBitParams_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditWrestlerCareerUtilityFunction_GetBitParams_Statics::NewProp_Param,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditWrestlerCareerUtilityFunction_GetBitParams_Statics::NewProp_List_ElementProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditWrestlerCareerUtilityFunction_GetBitParams_Statics::NewProp_List_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditWrestlerCareerUtilityFunction_GetBitParams_Statics::NewProp_List,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditWrestlerCareerUtilityFunction_GetBitParams_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EditWrestlerCareerUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditWrestlerCareerUtilityFunction_GetBitParams_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditWrestlerCareerUtilityFunction, nullptr, "GetBitParams", nullptr, nullptr, sizeof(EditWrestlerCareerUtilityFunction_eventGetBitParams_Parms), Z_Construct_UFunction_UEditWrestlerCareerUtilityFunction_GetBitParams_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditWrestlerCareerUtilityFunction_GetBitParams_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditWrestlerCareerUtilityFunction_GetBitParams_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditWrestlerCareerUtilityFunction_GetBitParams_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditWrestlerCareerUtilityFunction_GetBitParams()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditWrestlerCareerUtilityFunction_GetBitParams_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditWrestlerCareerUtilityFunction_GetIntParam_Statics
	{
		struct EditWrestlerCareerUtilityFunction_eventGetIntParam_Parms
		{
			FPersonalityParam Param;
			EPersonalityIntParamType Type;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Param_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Param;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditWrestlerCareerUtilityFunction_GetIntParam_Statics::NewProp_Param_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditWrestlerCareerUtilityFunction_GetIntParam_Statics::NewProp_Param = { "Param", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditWrestlerCareerUtilityFunction_eventGetIntParam_Parms, Param), Z_Construct_UScriptStruct_FPersonalityParam, METADATA_PARAMS(Z_Construct_UFunction_UEditWrestlerCareerUtilityFunction_GetIntParam_Statics::NewProp_Param_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditWrestlerCareerUtilityFunction_GetIntParam_Statics::NewProp_Param_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEditWrestlerCareerUtilityFunction_GetIntParam_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditWrestlerCareerUtilityFunction_GetIntParam_Statics::NewProp_Type_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEditWrestlerCareerUtilityFunction_GetIntParam_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditWrestlerCareerUtilityFunction_eventGetIntParam_Parms, Type), Z_Construct_UEnum_ELITE_Game_EPersonalityIntParamType, METADATA_PARAMS(Z_Construct_UFunction_UEditWrestlerCareerUtilityFunction_GetIntParam_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditWrestlerCareerUtilityFunction_GetIntParam_Statics::NewProp_Type_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEditWrestlerCareerUtilityFunction_GetIntParam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditWrestlerCareerUtilityFunction_eventGetIntParam_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditWrestlerCareerUtilityFunction_GetIntParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditWrestlerCareerUtilityFunction_GetIntParam_Statics::NewProp_Param,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditWrestlerCareerUtilityFunction_GetIntParam_Statics::NewProp_Type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditWrestlerCareerUtilityFunction_GetIntParam_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditWrestlerCareerUtilityFunction_GetIntParam_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditWrestlerCareerUtilityFunction_GetIntParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EditWrestlerCareerUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditWrestlerCareerUtilityFunction_GetIntParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditWrestlerCareerUtilityFunction, nullptr, "GetIntParam", nullptr, nullptr, sizeof(EditWrestlerCareerUtilityFunction_eventGetIntParam_Parms), Z_Construct_UFunction_UEditWrestlerCareerUtilityFunction_GetIntParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditWrestlerCareerUtilityFunction_GetIntParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditWrestlerCareerUtilityFunction_GetIntParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditWrestlerCareerUtilityFunction_GetIntParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditWrestlerCareerUtilityFunction_GetIntParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditWrestlerCareerUtilityFunction_GetIntParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditWrestlerCareerUtilityFunction_SetBitParam_Statics
	{
		struct EditWrestlerCareerUtilityFunction_eventSetBitParam_Parms
		{
			FPersonalityParam Param;
			EPersonalityBitParamType Type;
			bool Value;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Param;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Type;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static void NewProp_Value_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditWrestlerCareerUtilityFunction_SetBitParam_Statics::NewProp_Param = { "Param", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditWrestlerCareerUtilityFunction_eventSetBitParam_Parms, Param), Z_Construct_UScriptStruct_FPersonalityParam, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEditWrestlerCareerUtilityFunction_SetBitParam_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditWrestlerCareerUtilityFunction_SetBitParam_Statics::NewProp_Type_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEditWrestlerCareerUtilityFunction_SetBitParam_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditWrestlerCareerUtilityFunction_eventSetBitParam_Parms, Type), Z_Construct_UEnum_ELITE_Game_EPersonalityBitParamType, METADATA_PARAMS(Z_Construct_UFunction_UEditWrestlerCareerUtilityFunction_SetBitParam_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditWrestlerCareerUtilityFunction_SetBitParam_Statics::NewProp_Type_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditWrestlerCareerUtilityFunction_SetBitParam_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UEditWrestlerCareerUtilityFunction_SetBitParam_Statics::NewProp_Value_SetBit(void* Obj)
	{
		((EditWrestlerCareerUtilityFunction_eventSetBitParam_Parms*)Obj)->Value = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditWrestlerCareerUtilityFunction_SetBitParam_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EditWrestlerCareerUtilityFunction_eventSetBitParam_Parms), &Z_Construct_UFunction_UEditWrestlerCareerUtilityFunction_SetBitParam_Statics::NewProp_Value_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UEditWrestlerCareerUtilityFunction_SetBitParam_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditWrestlerCareerUtilityFunction_SetBitParam_Statics::NewProp_Value_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditWrestlerCareerUtilityFunction_SetBitParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditWrestlerCareerUtilityFunction_SetBitParam_Statics::NewProp_Param,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditWrestlerCareerUtilityFunction_SetBitParam_Statics::NewProp_Type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditWrestlerCareerUtilityFunction_SetBitParam_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditWrestlerCareerUtilityFunction_SetBitParam_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditWrestlerCareerUtilityFunction_SetBitParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EditWrestlerCareerUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditWrestlerCareerUtilityFunction_SetBitParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditWrestlerCareerUtilityFunction, nullptr, "SetBitParam", nullptr, nullptr, sizeof(EditWrestlerCareerUtilityFunction_eventSetBitParam_Parms), Z_Construct_UFunction_UEditWrestlerCareerUtilityFunction_SetBitParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditWrestlerCareerUtilityFunction_SetBitParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditWrestlerCareerUtilityFunction_SetBitParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditWrestlerCareerUtilityFunction_SetBitParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditWrestlerCareerUtilityFunction_SetBitParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditWrestlerCareerUtilityFunction_SetBitParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditWrestlerCareerUtilityFunction_SetIntParam_Statics
	{
		struct EditWrestlerCareerUtilityFunction_eventSetIntParam_Parms
		{
			FPersonalityParam Param;
			EPersonalityIntParamType Type;
			int32 Value;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Param;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Type;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditWrestlerCareerUtilityFunction_SetIntParam_Statics::NewProp_Param = { "Param", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditWrestlerCareerUtilityFunction_eventSetIntParam_Parms, Param), Z_Construct_UScriptStruct_FPersonalityParam, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEditWrestlerCareerUtilityFunction_SetIntParam_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditWrestlerCareerUtilityFunction_SetIntParam_Statics::NewProp_Type_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEditWrestlerCareerUtilityFunction_SetIntParam_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditWrestlerCareerUtilityFunction_eventSetIntParam_Parms, Type), Z_Construct_UEnum_ELITE_Game_EPersonalityIntParamType, METADATA_PARAMS(Z_Construct_UFunction_UEditWrestlerCareerUtilityFunction_SetIntParam_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditWrestlerCareerUtilityFunction_SetIntParam_Statics::NewProp_Type_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditWrestlerCareerUtilityFunction_SetIntParam_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEditWrestlerCareerUtilityFunction_SetIntParam_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditWrestlerCareerUtilityFunction_eventSetIntParam_Parms, Value), METADATA_PARAMS(Z_Construct_UFunction_UEditWrestlerCareerUtilityFunction_SetIntParam_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditWrestlerCareerUtilityFunction_SetIntParam_Statics::NewProp_Value_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditWrestlerCareerUtilityFunction_SetIntParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditWrestlerCareerUtilityFunction_SetIntParam_Statics::NewProp_Param,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditWrestlerCareerUtilityFunction_SetIntParam_Statics::NewProp_Type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditWrestlerCareerUtilityFunction_SetIntParam_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditWrestlerCareerUtilityFunction_SetIntParam_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditWrestlerCareerUtilityFunction_SetIntParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EditWrestlerCareerUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditWrestlerCareerUtilityFunction_SetIntParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditWrestlerCareerUtilityFunction, nullptr, "SetIntParam", nullptr, nullptr, sizeof(EditWrestlerCareerUtilityFunction_eventSetIntParam_Parms), Z_Construct_UFunction_UEditWrestlerCareerUtilityFunction_SetIntParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditWrestlerCareerUtilityFunction_SetIntParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditWrestlerCareerUtilityFunction_SetIntParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditWrestlerCareerUtilityFunction_SetIntParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditWrestlerCareerUtilityFunction_SetIntParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditWrestlerCareerUtilityFunction_SetIntParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEditWrestlerCareerUtilityFunction_NoRegister()
	{
		return UEditWrestlerCareerUtilityFunction::StaticClass();
	}
	struct Z_Construct_UClass_UEditWrestlerCareerUtilityFunction_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEditWrestlerCareerUtilityFunction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ELITE_Game,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEditWrestlerCareerUtilityFunction_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEditWrestlerCareerUtilityFunction_GetBitParam, "GetBitParam" }, // 21955774
		{ &Z_Construct_UFunction_UEditWrestlerCareerUtilityFunction_GetBitParams, "GetBitParams" }, // 3117539845
		{ &Z_Construct_UFunction_UEditWrestlerCareerUtilityFunction_GetIntParam, "GetIntParam" }, // 1591266014
		{ &Z_Construct_UFunction_UEditWrestlerCareerUtilityFunction_SetBitParam, "SetBitParam" }, // 1902664713
		{ &Z_Construct_UFunction_UEditWrestlerCareerUtilityFunction_SetIntParam, "SetIntParam" }, // 331753920
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditWrestlerCareerUtilityFunction_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "EditWrestlerCareerUtilityFunction.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/EditWrestlerCareerUtilityFunction.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEditWrestlerCareerUtilityFunction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditWrestlerCareerUtilityFunction>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEditWrestlerCareerUtilityFunction_Statics::ClassParams = {
		&UEditWrestlerCareerUtilityFunction::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEditWrestlerCareerUtilityFunction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEditWrestlerCareerUtilityFunction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEditWrestlerCareerUtilityFunction()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEditWrestlerCareerUtilityFunction_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEditWrestlerCareerUtilityFunction, 2684933565);
	template<> ELITE_GAME_API UClass* StaticClass<UEditWrestlerCareerUtilityFunction>()
	{
		return UEditWrestlerCareerUtilityFunction::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEditWrestlerCareerUtilityFunction(Z_Construct_UClass_UEditWrestlerCareerUtilityFunction, &UEditWrestlerCareerUtilityFunction::StaticClass, TEXT("/Script/ELITE_Game"), TEXT("UEditWrestlerCareerUtilityFunction"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEditWrestlerCareerUtilityFunction);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
