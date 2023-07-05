// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELKeyConfigUtilityFunction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELKeyConfigUtilityFunction() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELKeyConfigUtilityFunction_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELKeyConfigUtilityFunction();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EKeyMappingType();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FKeyMapSettingData();
// End Cross Module References
	DEFINE_FUNCTION(UELKeyConfigUtilityFunction::execConvertKeyConfigToButtonIconTag)
	{
		P_GET_OBJECT(UObject,Z_Param__pWorldContextObject);
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out__TargetText);
		P_GET_PROPERTY(FIntProperty,Z_Param__localPlayerNo);
		P_GET_UBOOL(Z_Param__isGamepad);
		P_GET_ENUM_REF(EKeyMappingType,Z_Param_Out__resultMappingType);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out__arrowButtonType);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELKeyConfigUtilityFunction::ConvertKeyConfigToButtonIconTag(Z_Param__pWorldContextObject,Z_Param_Out__TargetText,Z_Param__localPlayerNo,Z_Param__isGamepad,(EKeyMappingType&)(Z_Param_Out__resultMappingType),Z_Param_Out__arrowButtonType);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELKeyConfigUtilityFunction::execGetDefaultKeyMapSettingData)
	{
		P_GET_UBOOL(Z_Param__isGamepad);
		P_GET_TARRAY_REF(FKeyMapSettingData,Z_Param_Out__outResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELKeyConfigUtilityFunction::GetDefaultKeyMapSettingData(Z_Param__isGamepad,Z_Param_Out__outResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELKeyConfigUtilityFunction::execGetDefaultSSModeKeyMapSettingData)
	{
		P_GET_UBOOL(Z_Param__isGamepad);
		P_GET_TARRAY_REF(FKeyMapSettingData,Z_Param_Out__outResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELKeyConfigUtilityFunction::GetDefaultSSModeKeyMapSettingData(Z_Param__isGamepad,Z_Param_Out__outResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELKeyConfigUtilityFunction::execIsValidKeyMapData)
	{
		P_GET_STRUCT_REF(FKeyMapSettingData,Z_Param_Out_targetData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELKeyConfigUtilityFunction::IsValidKeyMapData(Z_Param_Out_targetData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELKeyConfigUtilityFunction::execSwapKeyMapSettingData)
	{
		P_GET_STRUCT_REF(FKeyMapSettingData,Z_Param_Out__dataA);
		P_GET_STRUCT_REF(FKeyMapSettingData,Z_Param_Out__dataB);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELKeyConfigUtilityFunction::SwapKeyMapSettingData(Z_Param_Out__dataA,Z_Param_Out__dataB);
		P_NATIVE_END;
	}
	void UELKeyConfigUtilityFunction::StaticRegisterNativesUELKeyConfigUtilityFunction()
	{
		UClass* Class = UELKeyConfigUtilityFunction::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ConvertKeyConfigToButtonIconTag", &UELKeyConfigUtilityFunction::execConvertKeyConfigToButtonIconTag },
			{ "GetDefaultKeyMapSettingData", &UELKeyConfigUtilityFunction::execGetDefaultKeyMapSettingData },
			{ "GetDefaultSSModeKeyMapSettingData", &UELKeyConfigUtilityFunction::execGetDefaultSSModeKeyMapSettingData },
			{ "IsValidKeyMapData", &UELKeyConfigUtilityFunction::execIsValidKeyMapData },
			{ "SwapKeyMapSettingData", &UELKeyConfigUtilityFunction::execSwapKeyMapSettingData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELKeyConfigUtilityFunction_ConvertKeyConfigToButtonIconTag_Statics
	{
		struct ELKeyConfigUtilityFunction_eventConvertKeyConfigToButtonIconTag_Parms
		{
			UObject* _pWorldContextObject;
			FText _TargetText;
			int32 _localPlayerNo;
			bool _isGamepad;
			EKeyMappingType _resultMappingType;
			int32 _arrowButtonType;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pWorldContextObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__TargetText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp__TargetText;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__localPlayerNo;
		static void NewProp__isGamepad_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isGamepad;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__resultMappingType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__resultMappingType;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__arrowButtonType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELKeyConfigUtilityFunction_ConvertKeyConfigToButtonIconTag_Statics::NewProp__pWorldContextObject = { "_pWorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELKeyConfigUtilityFunction_eventConvertKeyConfigToButtonIconTag_Parms, _pWorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELKeyConfigUtilityFunction_ConvertKeyConfigToButtonIconTag_Statics::NewProp__TargetText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UELKeyConfigUtilityFunction_ConvertKeyConfigToButtonIconTag_Statics::NewProp__TargetText = { "_TargetText", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELKeyConfigUtilityFunction_eventConvertKeyConfigToButtonIconTag_Parms, _TargetText), METADATA_PARAMS(Z_Construct_UFunction_UELKeyConfigUtilityFunction_ConvertKeyConfigToButtonIconTag_Statics::NewProp__TargetText_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELKeyConfigUtilityFunction_ConvertKeyConfigToButtonIconTag_Statics::NewProp__TargetText_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELKeyConfigUtilityFunction_ConvertKeyConfigToButtonIconTag_Statics::NewProp__localPlayerNo = { "_localPlayerNo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELKeyConfigUtilityFunction_eventConvertKeyConfigToButtonIconTag_Parms, _localPlayerNo), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELKeyConfigUtilityFunction_ConvertKeyConfigToButtonIconTag_Statics::NewProp__isGamepad_SetBit(void* Obj)
	{
		((ELKeyConfigUtilityFunction_eventConvertKeyConfigToButtonIconTag_Parms*)Obj)->_isGamepad = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELKeyConfigUtilityFunction_ConvertKeyConfigToButtonIconTag_Statics::NewProp__isGamepad = { "_isGamepad", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELKeyConfigUtilityFunction_eventConvertKeyConfigToButtonIconTag_Parms), &Z_Construct_UFunction_UELKeyConfigUtilityFunction_ConvertKeyConfigToButtonIconTag_Statics::NewProp__isGamepad_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELKeyConfigUtilityFunction_ConvertKeyConfigToButtonIconTag_Statics::NewProp__resultMappingType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELKeyConfigUtilityFunction_ConvertKeyConfigToButtonIconTag_Statics::NewProp__resultMappingType = { "_resultMappingType", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELKeyConfigUtilityFunction_eventConvertKeyConfigToButtonIconTag_Parms, _resultMappingType), Z_Construct_UEnum_ABP_200508_EKeyMappingType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELKeyConfigUtilityFunction_ConvertKeyConfigToButtonIconTag_Statics::NewProp__arrowButtonType = { "_arrowButtonType", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELKeyConfigUtilityFunction_eventConvertKeyConfigToButtonIconTag_Parms, _arrowButtonType), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELKeyConfigUtilityFunction_ConvertKeyConfigToButtonIconTag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELKeyConfigUtilityFunction_ConvertKeyConfigToButtonIconTag_Statics::NewProp__pWorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELKeyConfigUtilityFunction_ConvertKeyConfigToButtonIconTag_Statics::NewProp__TargetText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELKeyConfigUtilityFunction_ConvertKeyConfigToButtonIconTag_Statics::NewProp__localPlayerNo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELKeyConfigUtilityFunction_ConvertKeyConfigToButtonIconTag_Statics::NewProp__isGamepad,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELKeyConfigUtilityFunction_ConvertKeyConfigToButtonIconTag_Statics::NewProp__resultMappingType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELKeyConfigUtilityFunction_ConvertKeyConfigToButtonIconTag_Statics::NewProp__resultMappingType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELKeyConfigUtilityFunction_ConvertKeyConfigToButtonIconTag_Statics::NewProp__arrowButtonType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELKeyConfigUtilityFunction_ConvertKeyConfigToButtonIconTag_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELKeyConfigUtilityFunction.h" },
		{ "WorldContext", "_pWorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELKeyConfigUtilityFunction_ConvertKeyConfigToButtonIconTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELKeyConfigUtilityFunction, nullptr, "ConvertKeyConfigToButtonIconTag", nullptr, nullptr, sizeof(ELKeyConfigUtilityFunction_eventConvertKeyConfigToButtonIconTag_Parms), Z_Construct_UFunction_UELKeyConfigUtilityFunction_ConvertKeyConfigToButtonIconTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELKeyConfigUtilityFunction_ConvertKeyConfigToButtonIconTag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELKeyConfigUtilityFunction_ConvertKeyConfigToButtonIconTag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELKeyConfigUtilityFunction_ConvertKeyConfigToButtonIconTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELKeyConfigUtilityFunction_ConvertKeyConfigToButtonIconTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELKeyConfigUtilityFunction_ConvertKeyConfigToButtonIconTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELKeyConfigUtilityFunction_GetDefaultKeyMapSettingData_Statics
	{
		struct ELKeyConfigUtilityFunction_eventGetDefaultKeyMapSettingData_Parms
		{
			bool _isGamepad;
			TArray<FKeyMapSettingData> _outResult;
		};
		static void NewProp__isGamepad_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isGamepad;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__outResult_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__outResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELKeyConfigUtilityFunction_GetDefaultKeyMapSettingData_Statics::NewProp__isGamepad_SetBit(void* Obj)
	{
		((ELKeyConfigUtilityFunction_eventGetDefaultKeyMapSettingData_Parms*)Obj)->_isGamepad = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELKeyConfigUtilityFunction_GetDefaultKeyMapSettingData_Statics::NewProp__isGamepad = { "_isGamepad", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELKeyConfigUtilityFunction_eventGetDefaultKeyMapSettingData_Parms), &Z_Construct_UFunction_UELKeyConfigUtilityFunction_GetDefaultKeyMapSettingData_Statics::NewProp__isGamepad_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELKeyConfigUtilityFunction_GetDefaultKeyMapSettingData_Statics::NewProp__outResult_Inner = { "_outResult", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FKeyMapSettingData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELKeyConfigUtilityFunction_GetDefaultKeyMapSettingData_Statics::NewProp__outResult = { "_outResult", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELKeyConfigUtilityFunction_eventGetDefaultKeyMapSettingData_Parms, _outResult), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELKeyConfigUtilityFunction_GetDefaultKeyMapSettingData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELKeyConfigUtilityFunction_GetDefaultKeyMapSettingData_Statics::NewProp__isGamepad,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELKeyConfigUtilityFunction_GetDefaultKeyMapSettingData_Statics::NewProp__outResult_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELKeyConfigUtilityFunction_GetDefaultKeyMapSettingData_Statics::NewProp__outResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELKeyConfigUtilityFunction_GetDefaultKeyMapSettingData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELKeyConfigUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELKeyConfigUtilityFunction_GetDefaultKeyMapSettingData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELKeyConfigUtilityFunction, nullptr, "GetDefaultKeyMapSettingData", nullptr, nullptr, sizeof(ELKeyConfigUtilityFunction_eventGetDefaultKeyMapSettingData_Parms), Z_Construct_UFunction_UELKeyConfigUtilityFunction_GetDefaultKeyMapSettingData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELKeyConfigUtilityFunction_GetDefaultKeyMapSettingData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELKeyConfigUtilityFunction_GetDefaultKeyMapSettingData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELKeyConfigUtilityFunction_GetDefaultKeyMapSettingData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELKeyConfigUtilityFunction_GetDefaultKeyMapSettingData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELKeyConfigUtilityFunction_GetDefaultKeyMapSettingData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELKeyConfigUtilityFunction_GetDefaultSSModeKeyMapSettingData_Statics
	{
		struct ELKeyConfigUtilityFunction_eventGetDefaultSSModeKeyMapSettingData_Parms
		{
			bool _isGamepad;
			TArray<FKeyMapSettingData> _outResult;
		};
		static void NewProp__isGamepad_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isGamepad;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__outResult_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__outResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELKeyConfigUtilityFunction_GetDefaultSSModeKeyMapSettingData_Statics::NewProp__isGamepad_SetBit(void* Obj)
	{
		((ELKeyConfigUtilityFunction_eventGetDefaultSSModeKeyMapSettingData_Parms*)Obj)->_isGamepad = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELKeyConfigUtilityFunction_GetDefaultSSModeKeyMapSettingData_Statics::NewProp__isGamepad = { "_isGamepad", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELKeyConfigUtilityFunction_eventGetDefaultSSModeKeyMapSettingData_Parms), &Z_Construct_UFunction_UELKeyConfigUtilityFunction_GetDefaultSSModeKeyMapSettingData_Statics::NewProp__isGamepad_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELKeyConfigUtilityFunction_GetDefaultSSModeKeyMapSettingData_Statics::NewProp__outResult_Inner = { "_outResult", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FKeyMapSettingData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELKeyConfigUtilityFunction_GetDefaultSSModeKeyMapSettingData_Statics::NewProp__outResult = { "_outResult", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELKeyConfigUtilityFunction_eventGetDefaultSSModeKeyMapSettingData_Parms, _outResult), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELKeyConfigUtilityFunction_GetDefaultSSModeKeyMapSettingData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELKeyConfigUtilityFunction_GetDefaultSSModeKeyMapSettingData_Statics::NewProp__isGamepad,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELKeyConfigUtilityFunction_GetDefaultSSModeKeyMapSettingData_Statics::NewProp__outResult_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELKeyConfigUtilityFunction_GetDefaultSSModeKeyMapSettingData_Statics::NewProp__outResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELKeyConfigUtilityFunction_GetDefaultSSModeKeyMapSettingData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELKeyConfigUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELKeyConfigUtilityFunction_GetDefaultSSModeKeyMapSettingData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELKeyConfigUtilityFunction, nullptr, "GetDefaultSSModeKeyMapSettingData", nullptr, nullptr, sizeof(ELKeyConfigUtilityFunction_eventGetDefaultSSModeKeyMapSettingData_Parms), Z_Construct_UFunction_UELKeyConfigUtilityFunction_GetDefaultSSModeKeyMapSettingData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELKeyConfigUtilityFunction_GetDefaultSSModeKeyMapSettingData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELKeyConfigUtilityFunction_GetDefaultSSModeKeyMapSettingData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELKeyConfigUtilityFunction_GetDefaultSSModeKeyMapSettingData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELKeyConfigUtilityFunction_GetDefaultSSModeKeyMapSettingData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELKeyConfigUtilityFunction_GetDefaultSSModeKeyMapSettingData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELKeyConfigUtilityFunction_IsValidKeyMapData_Statics
	{
		struct ELKeyConfigUtilityFunction_eventIsValidKeyMapData_Parms
		{
			FKeyMapSettingData targetData;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_targetData;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELKeyConfigUtilityFunction_IsValidKeyMapData_Statics::NewProp_targetData = { "targetData", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELKeyConfigUtilityFunction_eventIsValidKeyMapData_Parms, targetData), Z_Construct_UScriptStruct_FKeyMapSettingData, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELKeyConfigUtilityFunction_IsValidKeyMapData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELKeyConfigUtilityFunction_eventIsValidKeyMapData_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELKeyConfigUtilityFunction_IsValidKeyMapData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELKeyConfigUtilityFunction_eventIsValidKeyMapData_Parms), &Z_Construct_UFunction_UELKeyConfigUtilityFunction_IsValidKeyMapData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELKeyConfigUtilityFunction_IsValidKeyMapData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELKeyConfigUtilityFunction_IsValidKeyMapData_Statics::NewProp_targetData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELKeyConfigUtilityFunction_IsValidKeyMapData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELKeyConfigUtilityFunction_IsValidKeyMapData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELKeyConfigUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELKeyConfigUtilityFunction_IsValidKeyMapData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELKeyConfigUtilityFunction, nullptr, "IsValidKeyMapData", nullptr, nullptr, sizeof(ELKeyConfigUtilityFunction_eventIsValidKeyMapData_Parms), Z_Construct_UFunction_UELKeyConfigUtilityFunction_IsValidKeyMapData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELKeyConfigUtilityFunction_IsValidKeyMapData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELKeyConfigUtilityFunction_IsValidKeyMapData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELKeyConfigUtilityFunction_IsValidKeyMapData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELKeyConfigUtilityFunction_IsValidKeyMapData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELKeyConfigUtilityFunction_IsValidKeyMapData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELKeyConfigUtilityFunction_SwapKeyMapSettingData_Statics
	{
		struct ELKeyConfigUtilityFunction_eventSwapKeyMapSettingData_Parms
		{
			FKeyMapSettingData _dataA;
			FKeyMapSettingData _dataB;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__dataA;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__dataB;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELKeyConfigUtilityFunction_SwapKeyMapSettingData_Statics::NewProp__dataA = { "_dataA", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELKeyConfigUtilityFunction_eventSwapKeyMapSettingData_Parms, _dataA), Z_Construct_UScriptStruct_FKeyMapSettingData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELKeyConfigUtilityFunction_SwapKeyMapSettingData_Statics::NewProp__dataB = { "_dataB", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELKeyConfigUtilityFunction_eventSwapKeyMapSettingData_Parms, _dataB), Z_Construct_UScriptStruct_FKeyMapSettingData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELKeyConfigUtilityFunction_SwapKeyMapSettingData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELKeyConfigUtilityFunction_SwapKeyMapSettingData_Statics::NewProp__dataA,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELKeyConfigUtilityFunction_SwapKeyMapSettingData_Statics::NewProp__dataB,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELKeyConfigUtilityFunction_SwapKeyMapSettingData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELKeyConfigUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELKeyConfigUtilityFunction_SwapKeyMapSettingData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELKeyConfigUtilityFunction, nullptr, "SwapKeyMapSettingData", nullptr, nullptr, sizeof(ELKeyConfigUtilityFunction_eventSwapKeyMapSettingData_Parms), Z_Construct_UFunction_UELKeyConfigUtilityFunction_SwapKeyMapSettingData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELKeyConfigUtilityFunction_SwapKeyMapSettingData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELKeyConfigUtilityFunction_SwapKeyMapSettingData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELKeyConfigUtilityFunction_SwapKeyMapSettingData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELKeyConfigUtilityFunction_SwapKeyMapSettingData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELKeyConfigUtilityFunction_SwapKeyMapSettingData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELKeyConfigUtilityFunction_NoRegister()
	{
		return UELKeyConfigUtilityFunction::StaticClass();
	}
	struct Z_Construct_UClass_UELKeyConfigUtilityFunction_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELKeyConfigUtilityFunction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELKeyConfigUtilityFunction_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELKeyConfigUtilityFunction_ConvertKeyConfigToButtonIconTag, "ConvertKeyConfigToButtonIconTag" }, // 1968163008
		{ &Z_Construct_UFunction_UELKeyConfigUtilityFunction_GetDefaultKeyMapSettingData, "GetDefaultKeyMapSettingData" }, // 2410277810
		{ &Z_Construct_UFunction_UELKeyConfigUtilityFunction_GetDefaultSSModeKeyMapSettingData, "GetDefaultSSModeKeyMapSettingData" }, // 4034204146
		{ &Z_Construct_UFunction_UELKeyConfigUtilityFunction_IsValidKeyMapData, "IsValidKeyMapData" }, // 380825503
		{ &Z_Construct_UFunction_UELKeyConfigUtilityFunction_SwapKeyMapSettingData, "SwapKeyMapSettingData" }, // 2304532267
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELKeyConfigUtilityFunction_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELKeyConfigUtilityFunction.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELKeyConfigUtilityFunction.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELKeyConfigUtilityFunction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELKeyConfigUtilityFunction>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELKeyConfigUtilityFunction_Statics::ClassParams = {
		&UELKeyConfigUtilityFunction::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UELKeyConfigUtilityFunction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELKeyConfigUtilityFunction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELKeyConfigUtilityFunction()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELKeyConfigUtilityFunction_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELKeyConfigUtilityFunction, 108608888);
	template<> ABP_200508_API UClass* StaticClass<UELKeyConfigUtilityFunction>()
	{
		return UELKeyConfigUtilityFunction::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELKeyConfigUtilityFunction(Z_Construct_UClass_UELKeyConfigUtilityFunction, &UELKeyConfigUtilityFunction::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELKeyConfigUtilityFunction"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELKeyConfigUtilityFunction);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
