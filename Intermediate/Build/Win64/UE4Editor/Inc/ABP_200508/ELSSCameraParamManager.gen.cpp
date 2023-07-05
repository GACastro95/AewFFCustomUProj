// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSCameraParamManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSCameraParamManager() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELSSCameraParamManager_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSCameraParamManager();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSCameraParamType();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSCameraStateControlParam();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSCameraBaseParamID();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSCameraPlaceType();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSCameraState();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSCameraBaseParam();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSCameraStateParam();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSCameraPlaceParam();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UELSSCameraParamManager::execGetCameraParamType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESSCameraParamType*)Z_Param__Result=P_THIS->GetCameraParamType();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSCameraParamManager::execSetBaseParamWithBlend)
	{
		P_GET_ENUM(ESSCameraBaseParamID,Z_Param_inBaseParamID);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InDuration);
		P_GET_UBOOL(Z_Param_inEaseOut);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBaseParamWithBlend(ESSCameraBaseParamID(Z_Param_inBaseParamID),Z_Param_InDuration,Z_Param_inEaseOut);
		P_NATIVE_END;
	}
	static FName NAME_UELSSCameraParamManager_GetStateControlParam = FName(TEXT("GetStateControlParam"));
	void UELSSCameraParamManager::GetStateControlParam(FSSCameraStateControlParam& OutParam) const
	{
		ELSSCameraParamManager_eventGetStateControlParam_Parms Parms;
		Parms.OutParam=OutParam;
		const_cast<UELSSCameraParamManager*>(this)->ProcessEvent(FindFunctionChecked(NAME_UELSSCameraParamManager_GetStateControlParam),&Parms);
		OutParam=Parms.OutParam;
	}
	static FName NAME_UELSSCameraParamManager_SetBaseParam = FName(TEXT("SetBaseParam"));
	void UELSSCameraParamManager::SetBaseParam(ESSCameraBaseParamID inControlMode)
	{
		ELSSCameraParamManager_eventSetBaseParam_Parms Parms;
		Parms.inControlMode=inControlMode;
		ProcessEvent(FindFunctionChecked(NAME_UELSSCameraParamManager_SetBaseParam),&Parms);
	}
	static FName NAME_UELSSCameraParamManager_SetPlaceParam = FName(TEXT("SetPlaceParam"));
	void UELSSCameraParamManager::SetPlaceParam(ESSCameraPlaceType inPlaceType)
	{
		ELSSCameraParamManager_eventSetPlaceParam_Parms Parms;
		Parms.inPlaceType=inPlaceType;
		ProcessEvent(FindFunctionChecked(NAME_UELSSCameraParamManager_SetPlaceParam),&Parms);
	}
	static FName NAME_UELSSCameraParamManager_SetStateParam = FName(TEXT("SetStateParam"));
	void UELSSCameraParamManager::SetStateParam(ESSCameraState inState)
	{
		ELSSCameraParamManager_eventSetStateParam_Parms Parms;
		Parms.inState=inState;
		ProcessEvent(FindFunctionChecked(NAME_UELSSCameraParamManager_SetStateParam),&Parms);
	}
	void UELSSCameraParamManager::StaticRegisterNativesUELSSCameraParamManager()
	{
		UClass* Class = UELSSCameraParamManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCameraParamType", &UELSSCameraParamManager::execGetCameraParamType },
			{ "SetBaseParamWithBlend", &UELSSCameraParamManager::execSetBaseParamWithBlend },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELSSCameraParamManager_GetCameraParamType_Statics
	{
		struct ELSSCameraParamManager_eventGetCameraParamType_Parms
		{
			ESSCameraParamType ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSSCameraParamManager_GetCameraParamType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSSCameraParamManager_GetCameraParamType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCameraParamManager_eventGetCameraParamType_Parms, ReturnValue), Z_Construct_UEnum_ABP_200508_ESSCameraParamType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSCameraParamManager_GetCameraParamType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCameraParamManager_GetCameraParamType_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCameraParamManager_GetCameraParamType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSCameraParamManager_GetCameraParamType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSCameraParamManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSCameraParamManager_GetCameraParamType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSCameraParamManager, nullptr, "GetCameraParamType", nullptr, nullptr, sizeof(ELSSCameraParamManager_eventGetCameraParamType_Parms), Z_Construct_UFunction_UELSSCameraParamManager_GetCameraParamType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCameraParamManager_GetCameraParamType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSCameraParamManager_GetCameraParamType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCameraParamManager_GetCameraParamType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSCameraParamManager_GetCameraParamType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSCameraParamManager_GetCameraParamType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSCameraParamManager_GetStateControlParam_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutParam;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELSSCameraParamManager_GetStateControlParam_Statics::NewProp_OutParam = { "OutParam", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCameraParamManager_eventGetStateControlParam_Parms, OutParam), Z_Construct_UScriptStruct_FSSCameraStateControlParam, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSCameraParamManager_GetStateControlParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCameraParamManager_GetStateControlParam_Statics::NewProp_OutParam,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSCameraParamManager_GetStateControlParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSCameraParamManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSCameraParamManager_GetStateControlParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSCameraParamManager, nullptr, "GetStateControlParam", nullptr, nullptr, sizeof(ELSSCameraParamManager_eventGetStateControlParam_Parms), Z_Construct_UFunction_UELSSCameraParamManager_GetStateControlParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCameraParamManager_GetStateControlParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSCameraParamManager_GetStateControlParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCameraParamManager_GetStateControlParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSCameraParamManager_GetStateControlParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSCameraParamManager_GetStateControlParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSCameraParamManager_SetBaseParam_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_inControlMode_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_inControlMode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSSCameraParamManager_SetBaseParam_Statics::NewProp_inControlMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSSCameraParamManager_SetBaseParam_Statics::NewProp_inControlMode = { "inControlMode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCameraParamManager_eventSetBaseParam_Parms, inControlMode), Z_Construct_UEnum_ABP_200508_ESSCameraBaseParamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSCameraParamManager_SetBaseParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCameraParamManager_SetBaseParam_Statics::NewProp_inControlMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCameraParamManager_SetBaseParam_Statics::NewProp_inControlMode,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSCameraParamManager_SetBaseParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSCameraParamManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSCameraParamManager_SetBaseParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSCameraParamManager, nullptr, "SetBaseParam", nullptr, nullptr, sizeof(ELSSCameraParamManager_eventSetBaseParam_Parms), Z_Construct_UFunction_UELSSCameraParamManager_SetBaseParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCameraParamManager_SetBaseParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSCameraParamManager_SetBaseParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCameraParamManager_SetBaseParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSCameraParamManager_SetBaseParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSCameraParamManager_SetBaseParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSCameraParamManager_SetBaseParamWithBlend_Statics
	{
		struct ELSSCameraParamManager_eventSetBaseParamWithBlend_Parms
		{
			ESSCameraBaseParamID inBaseParamID;
			float InDuration;
			bool inEaseOut;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_inBaseParamID_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_inBaseParamID;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InDuration;
		static void NewProp_inEaseOut_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_inEaseOut;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSSCameraParamManager_SetBaseParamWithBlend_Statics::NewProp_inBaseParamID_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSSCameraParamManager_SetBaseParamWithBlend_Statics::NewProp_inBaseParamID = { "inBaseParamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCameraParamManager_eventSetBaseParamWithBlend_Parms, inBaseParamID), Z_Construct_UEnum_ABP_200508_ESSCameraBaseParamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELSSCameraParamManager_SetBaseParamWithBlend_Statics::NewProp_InDuration = { "InDuration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCameraParamManager_eventSetBaseParamWithBlend_Parms, InDuration), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELSSCameraParamManager_SetBaseParamWithBlend_Statics::NewProp_inEaseOut_SetBit(void* Obj)
	{
		((ELSSCameraParamManager_eventSetBaseParamWithBlend_Parms*)Obj)->inEaseOut = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSCameraParamManager_SetBaseParamWithBlend_Statics::NewProp_inEaseOut = { "inEaseOut", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSCameraParamManager_eventSetBaseParamWithBlend_Parms), &Z_Construct_UFunction_UELSSCameraParamManager_SetBaseParamWithBlend_Statics::NewProp_inEaseOut_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSCameraParamManager_SetBaseParamWithBlend_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCameraParamManager_SetBaseParamWithBlend_Statics::NewProp_inBaseParamID_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCameraParamManager_SetBaseParamWithBlend_Statics::NewProp_inBaseParamID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCameraParamManager_SetBaseParamWithBlend_Statics::NewProp_InDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCameraParamManager_SetBaseParamWithBlend_Statics::NewProp_inEaseOut,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSCameraParamManager_SetBaseParamWithBlend_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSCameraParamManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSCameraParamManager_SetBaseParamWithBlend_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSCameraParamManager, nullptr, "SetBaseParamWithBlend", nullptr, nullptr, sizeof(ELSSCameraParamManager_eventSetBaseParamWithBlend_Parms), Z_Construct_UFunction_UELSSCameraParamManager_SetBaseParamWithBlend_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCameraParamManager_SetBaseParamWithBlend_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSCameraParamManager_SetBaseParamWithBlend_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCameraParamManager_SetBaseParamWithBlend_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSCameraParamManager_SetBaseParamWithBlend()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSCameraParamManager_SetBaseParamWithBlend_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSCameraParamManager_SetPlaceParam_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_inPlaceType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_inPlaceType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSSCameraParamManager_SetPlaceParam_Statics::NewProp_inPlaceType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSSCameraParamManager_SetPlaceParam_Statics::NewProp_inPlaceType = { "inPlaceType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCameraParamManager_eventSetPlaceParam_Parms, inPlaceType), Z_Construct_UEnum_ABP_200508_ESSCameraPlaceType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSCameraParamManager_SetPlaceParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCameraParamManager_SetPlaceParam_Statics::NewProp_inPlaceType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCameraParamManager_SetPlaceParam_Statics::NewProp_inPlaceType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSCameraParamManager_SetPlaceParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSCameraParamManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSCameraParamManager_SetPlaceParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSCameraParamManager, nullptr, "SetPlaceParam", nullptr, nullptr, sizeof(ELSSCameraParamManager_eventSetPlaceParam_Parms), Z_Construct_UFunction_UELSSCameraParamManager_SetPlaceParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCameraParamManager_SetPlaceParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSCameraParamManager_SetPlaceParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCameraParamManager_SetPlaceParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSCameraParamManager_SetPlaceParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSCameraParamManager_SetPlaceParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSCameraParamManager_SetStateParam_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_inState_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_inState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSSCameraParamManager_SetStateParam_Statics::NewProp_inState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSSCameraParamManager_SetStateParam_Statics::NewProp_inState = { "inState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCameraParamManager_eventSetStateParam_Parms, inState), Z_Construct_UEnum_ABP_200508_ESSCameraState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSCameraParamManager_SetStateParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCameraParamManager_SetStateParam_Statics::NewProp_inState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCameraParamManager_SetStateParam_Statics::NewProp_inState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSCameraParamManager_SetStateParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSCameraParamManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSCameraParamManager_SetStateParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSCameraParamManager, nullptr, "SetStateParam", nullptr, nullptr, sizeof(ELSSCameraParamManager_eventSetStateParam_Parms), Z_Construct_UFunction_UELSSCameraParamManager_SetStateParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCameraParamManager_SetStateParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSCameraParamManager_SetStateParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCameraParamManager_SetStateParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSCameraParamManager_SetStateParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSCameraParamManager_SetStateParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELSSCameraParamManager_NoRegister()
	{
		return UELSSCameraParamManager::StaticClass();
	}
	struct Z_Construct_UClass_UELSSCameraParamManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseParamTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BaseParamTarget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseParamOrigin_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BaseParamOrigin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BaseParam;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StateParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StateParam;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlaceParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlaceParam;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CurrentState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CurrentState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CurrentPlaceType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentPlaceType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CurrentPlaceType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseParamLerpRemainTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseParamLerpRemainTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwnerActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwnerActor;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CameraParamType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraParamType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CameraParamType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELSSCameraParamManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELSSCameraParamManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELSSCameraParamManager_GetCameraParamType, "GetCameraParamType" }, // 22788644
		{ &Z_Construct_UFunction_UELSSCameraParamManager_GetStateControlParam, "GetStateControlParam" }, // 128563924
		{ &Z_Construct_UFunction_UELSSCameraParamManager_SetBaseParam, "SetBaseParam" }, // 1295699494
		{ &Z_Construct_UFunction_UELSSCameraParamManager_SetBaseParamWithBlend, "SetBaseParamWithBlend" }, // 3284403562
		{ &Z_Construct_UFunction_UELSSCameraParamManager_SetPlaceParam, "SetPlaceParam" }, // 1605359286
		{ &Z_Construct_UFunction_UELSSCameraParamManager_SetStateParam, "SetStateParam" }, // 651963766
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSCameraParamManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELSSCameraParamManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSSCameraParamManager.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSCameraParamManager_Statics::NewProp_BaseParamTarget_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSCameraParamManager" },
		{ "ModuleRelativePath", "Public/ELSSCameraParamManager.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELSSCameraParamManager_Statics::NewProp_BaseParamTarget = { "BaseParamTarget", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSCameraParamManager, BaseParamTarget), Z_Construct_UScriptStruct_FSSCameraBaseParam, METADATA_PARAMS(Z_Construct_UClass_UELSSCameraParamManager_Statics::NewProp_BaseParamTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSCameraParamManager_Statics::NewProp_BaseParamTarget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSCameraParamManager_Statics::NewProp_BaseParamOrigin_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSCameraParamManager" },
		{ "ModuleRelativePath", "Public/ELSSCameraParamManager.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELSSCameraParamManager_Statics::NewProp_BaseParamOrigin = { "BaseParamOrigin", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSCameraParamManager, BaseParamOrigin), Z_Construct_UScriptStruct_FSSCameraBaseParam, METADATA_PARAMS(Z_Construct_UClass_UELSSCameraParamManager_Statics::NewProp_BaseParamOrigin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSCameraParamManager_Statics::NewProp_BaseParamOrigin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSCameraParamManager_Statics::NewProp_BaseParam_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSCameraParamManager" },
		{ "ModuleRelativePath", "Public/ELSSCameraParamManager.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELSSCameraParamManager_Statics::NewProp_BaseParam = { "BaseParam", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSCameraParamManager, BaseParam), Z_Construct_UScriptStruct_FSSCameraBaseParam, METADATA_PARAMS(Z_Construct_UClass_UELSSCameraParamManager_Statics::NewProp_BaseParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSCameraParamManager_Statics::NewProp_BaseParam_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSCameraParamManager_Statics::NewProp_StateParam_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSCameraParamManager" },
		{ "ModuleRelativePath", "Public/ELSSCameraParamManager.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELSSCameraParamManager_Statics::NewProp_StateParam = { "StateParam", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSCameraParamManager, StateParam), Z_Construct_UScriptStruct_FSSCameraStateParam, METADATA_PARAMS(Z_Construct_UClass_UELSSCameraParamManager_Statics::NewProp_StateParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSCameraParamManager_Statics::NewProp_StateParam_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSCameraParamManager_Statics::NewProp_PlaceParam_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSCameraParamManager" },
		{ "ModuleRelativePath", "Public/ELSSCameraParamManager.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELSSCameraParamManager_Statics::NewProp_PlaceParam = { "PlaceParam", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSCameraParamManager, PlaceParam), Z_Construct_UScriptStruct_FSSCameraPlaceParam, METADATA_PARAMS(Z_Construct_UClass_UELSSCameraParamManager_Statics::NewProp_PlaceParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSCameraParamManager_Statics::NewProp_PlaceParam_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UELSSCameraParamManager_Statics::NewProp_CurrentState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSCameraParamManager_Statics::NewProp_CurrentState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSCameraParamManager" },
		{ "ModuleRelativePath", "Public/ELSSCameraParamManager.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UELSSCameraParamManager_Statics::NewProp_CurrentState = { "CurrentState", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSCameraParamManager, CurrentState), Z_Construct_UEnum_ABP_200508_ESSCameraState, METADATA_PARAMS(Z_Construct_UClass_UELSSCameraParamManager_Statics::NewProp_CurrentState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSCameraParamManager_Statics::NewProp_CurrentState_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UELSSCameraParamManager_Statics::NewProp_CurrentPlaceType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSCameraParamManager_Statics::NewProp_CurrentPlaceType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSCameraParamManager" },
		{ "ModuleRelativePath", "Public/ELSSCameraParamManager.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UELSSCameraParamManager_Statics::NewProp_CurrentPlaceType = { "CurrentPlaceType", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSCameraParamManager, CurrentPlaceType), Z_Construct_UEnum_ABP_200508_ESSCameraPlaceType, METADATA_PARAMS(Z_Construct_UClass_UELSSCameraParamManager_Statics::NewProp_CurrentPlaceType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSCameraParamManager_Statics::NewProp_CurrentPlaceType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSCameraParamManager_Statics::NewProp_BaseParamLerpRemainTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSCameraParamManager" },
		{ "ModuleRelativePath", "Public/ELSSCameraParamManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UELSSCameraParamManager_Statics::NewProp_BaseParamLerpRemainTime = { "BaseParamLerpRemainTime", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSCameraParamManager, BaseParamLerpRemainTime), METADATA_PARAMS(Z_Construct_UClass_UELSSCameraParamManager_Statics::NewProp_BaseParamLerpRemainTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSCameraParamManager_Statics::NewProp_BaseParamLerpRemainTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSCameraParamManager_Statics::NewProp_OwnerActor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSCameraParamManager" },
		{ "ModuleRelativePath", "Public/ELSSCameraParamManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSCameraParamManager_Statics::NewProp_OwnerActor = { "OwnerActor", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSCameraParamManager, OwnerActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSCameraParamManager_Statics::NewProp_OwnerActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSCameraParamManager_Statics::NewProp_OwnerActor_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UELSSCameraParamManager_Statics::NewProp_CameraParamType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSCameraParamManager_Statics::NewProp_CameraParamType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSCameraParamManager" },
		{ "ModuleRelativePath", "Public/ELSSCameraParamManager.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UELSSCameraParamManager_Statics::NewProp_CameraParamType = { "CameraParamType", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSCameraParamManager, CameraParamType), Z_Construct_UEnum_ABP_200508_ESSCameraParamType, METADATA_PARAMS(Z_Construct_UClass_UELSSCameraParamManager_Statics::NewProp_CameraParamType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSCameraParamManager_Statics::NewProp_CameraParamType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UELSSCameraParamManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSCameraParamManager_Statics::NewProp_BaseParamTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSCameraParamManager_Statics::NewProp_BaseParamOrigin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSCameraParamManager_Statics::NewProp_BaseParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSCameraParamManager_Statics::NewProp_StateParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSCameraParamManager_Statics::NewProp_PlaceParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSCameraParamManager_Statics::NewProp_CurrentState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSCameraParamManager_Statics::NewProp_CurrentState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSCameraParamManager_Statics::NewProp_CurrentPlaceType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSCameraParamManager_Statics::NewProp_CurrentPlaceType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSCameraParamManager_Statics::NewProp_BaseParamLerpRemainTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSCameraParamManager_Statics::NewProp_OwnerActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSCameraParamManager_Statics::NewProp_CameraParamType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSCameraParamManager_Statics::NewProp_CameraParamType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELSSCameraParamManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELSSCameraParamManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELSSCameraParamManager_Statics::ClassParams = {
		&UELSSCameraParamManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UELSSCameraParamManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UELSSCameraParamManager_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELSSCameraParamManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSCameraParamManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELSSCameraParamManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELSSCameraParamManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELSSCameraParamManager, 350448389);
	template<> ABP_200508_API UClass* StaticClass<UELSSCameraParamManager>()
	{
		return UELSSCameraParamManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELSSCameraParamManager(Z_Construct_UClass_UELSSCameraParamManager, &UELSSCameraParamManager::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELSSCameraParamManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELSSCameraParamManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
