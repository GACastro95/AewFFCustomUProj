// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yEOSSDK/Public/EOSSessionP2PLatencyCheckPacket.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOSSessionP2PLatencyCheckPacket() {}
// Cross Module References
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSSessionP2PLatencyCheckPacket_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSSessionP2PLatencyCheckPacket();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSSessionP2PPacketBase();
	UPackage* Z_Construct_UPackage__Script_yEOSSDK();
// End Cross Module References
	DEFINE_FUNCTION(UEOSSessionP2PLatencyCheckPacket::execCheckTimeout)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param__fSeconds);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CheckTimeout(Z_Param__fSeconds);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSessionP2PLatencyCheckPacket::execGetAverage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetAverage();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSessionP2PLatencyCheckPacket::execGetMax)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMax();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSessionP2PLatencyCheckPacket::execGetMin)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMin();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSessionP2PLatencyCheckPacket::execIsEndCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsEndCount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSessionP2PLatencyCheckPacket::execIsFirstUser)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsFirstUser();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSessionP2PLatencyCheckPacket::execIsStartedMeasure)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsStartedMeasure();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSessionP2PLatencyCheckPacket::execMeasure)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Measure();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSessionP2PLatencyCheckPacket::execMeasureAndIncremnt)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->MeasureAndIncremnt();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSessionP2PLatencyCheckPacket::execReset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Reset();
		P_NATIVE_END;
	}
	void UEOSSessionP2PLatencyCheckPacket::StaticRegisterNativesUEOSSessionP2PLatencyCheckPacket()
	{
		UClass* Class = UEOSSessionP2PLatencyCheckPacket::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CheckTimeout", &UEOSSessionP2PLatencyCheckPacket::execCheckTimeout },
			{ "GetAverage", &UEOSSessionP2PLatencyCheckPacket::execGetAverage },
			{ "GetMax", &UEOSSessionP2PLatencyCheckPacket::execGetMax },
			{ "GetMin", &UEOSSessionP2PLatencyCheckPacket::execGetMin },
			{ "IsEndCount", &UEOSSessionP2PLatencyCheckPacket::execIsEndCount },
			{ "IsFirstUser", &UEOSSessionP2PLatencyCheckPacket::execIsFirstUser },
			{ "IsStartedMeasure", &UEOSSessionP2PLatencyCheckPacket::execIsStartedMeasure },
			{ "Measure", &UEOSSessionP2PLatencyCheckPacket::execMeasure },
			{ "MeasureAndIncremnt", &UEOSSessionP2PLatencyCheckPacket::execMeasureAndIncremnt },
			{ "Reset", &UEOSSessionP2PLatencyCheckPacket::execReset },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEOSSessionP2PLatencyCheckPacket_CheckTimeout_Statics
	{
		struct EOSSessionP2PLatencyCheckPacket_eventCheckTimeout_Parms
		{
			float _fSeconds;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__fSeconds;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UEOSSessionP2PLatencyCheckPacket_CheckTimeout_Statics::NewProp__fSeconds = { "_fSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2PLatencyCheckPacket_eventCheckTimeout_Parms, _fSeconds), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSSessionP2PLatencyCheckPacket_CheckTimeout_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSSessionP2PLatencyCheckPacket_eventCheckTimeout_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSSessionP2PLatencyCheckPacket_CheckTimeout_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSSessionP2PLatencyCheckPacket_eventCheckTimeout_Parms), &Z_Construct_UFunction_UEOSSessionP2PLatencyCheckPacket_CheckTimeout_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionP2PLatencyCheckPacket_CheckTimeout_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PLatencyCheckPacket_CheckTimeout_Statics::NewProp__fSeconds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PLatencyCheckPacket_CheckTimeout_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2PLatencyCheckPacket_CheckTimeout_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2PLatencyCheckPacket.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2PLatencyCheckPacket_CheckTimeout_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2PLatencyCheckPacket, nullptr, "CheckTimeout", nullptr, nullptr, sizeof(EOSSessionP2PLatencyCheckPacket_eventCheckTimeout_Parms), Z_Construct_UFunction_UEOSSessionP2PLatencyCheckPacket_CheckTimeout_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PLatencyCheckPacket_CheckTimeout_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2PLatencyCheckPacket_CheckTimeout_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PLatencyCheckPacket_CheckTimeout_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2PLatencyCheckPacket_CheckTimeout()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2PLatencyCheckPacket_CheckTimeout_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionP2PLatencyCheckPacket_GetAverage_Statics
	{
		struct EOSSessionP2PLatencyCheckPacket_eventGetAverage_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UEOSSessionP2PLatencyCheckPacket_GetAverage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2PLatencyCheckPacket_eventGetAverage_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionP2PLatencyCheckPacket_GetAverage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PLatencyCheckPacket_GetAverage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2PLatencyCheckPacket_GetAverage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2PLatencyCheckPacket.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2PLatencyCheckPacket_GetAverage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2PLatencyCheckPacket, nullptr, "GetAverage", nullptr, nullptr, sizeof(EOSSessionP2PLatencyCheckPacket_eventGetAverage_Parms), Z_Construct_UFunction_UEOSSessionP2PLatencyCheckPacket_GetAverage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PLatencyCheckPacket_GetAverage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2PLatencyCheckPacket_GetAverage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PLatencyCheckPacket_GetAverage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2PLatencyCheckPacket_GetAverage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2PLatencyCheckPacket_GetAverage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionP2PLatencyCheckPacket_GetMax_Statics
	{
		struct EOSSessionP2PLatencyCheckPacket_eventGetMax_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UEOSSessionP2PLatencyCheckPacket_GetMax_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2PLatencyCheckPacket_eventGetMax_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionP2PLatencyCheckPacket_GetMax_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PLatencyCheckPacket_GetMax_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2PLatencyCheckPacket_GetMax_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2PLatencyCheckPacket.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2PLatencyCheckPacket_GetMax_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2PLatencyCheckPacket, nullptr, "GetMax", nullptr, nullptr, sizeof(EOSSessionP2PLatencyCheckPacket_eventGetMax_Parms), Z_Construct_UFunction_UEOSSessionP2PLatencyCheckPacket_GetMax_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PLatencyCheckPacket_GetMax_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2PLatencyCheckPacket_GetMax_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PLatencyCheckPacket_GetMax_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2PLatencyCheckPacket_GetMax()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2PLatencyCheckPacket_GetMax_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionP2PLatencyCheckPacket_GetMin_Statics
	{
		struct EOSSessionP2PLatencyCheckPacket_eventGetMin_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UEOSSessionP2PLatencyCheckPacket_GetMin_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2PLatencyCheckPacket_eventGetMin_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionP2PLatencyCheckPacket_GetMin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PLatencyCheckPacket_GetMin_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2PLatencyCheckPacket_GetMin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2PLatencyCheckPacket.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2PLatencyCheckPacket_GetMin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2PLatencyCheckPacket, nullptr, "GetMin", nullptr, nullptr, sizeof(EOSSessionP2PLatencyCheckPacket_eventGetMin_Parms), Z_Construct_UFunction_UEOSSessionP2PLatencyCheckPacket_GetMin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PLatencyCheckPacket_GetMin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2PLatencyCheckPacket_GetMin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PLatencyCheckPacket_GetMin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2PLatencyCheckPacket_GetMin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2PLatencyCheckPacket_GetMin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionP2PLatencyCheckPacket_IsEndCount_Statics
	{
		struct EOSSessionP2PLatencyCheckPacket_eventIsEndCount_Parms
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
	void Z_Construct_UFunction_UEOSSessionP2PLatencyCheckPacket_IsEndCount_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSSessionP2PLatencyCheckPacket_eventIsEndCount_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSSessionP2PLatencyCheckPacket_IsEndCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSSessionP2PLatencyCheckPacket_eventIsEndCount_Parms), &Z_Construct_UFunction_UEOSSessionP2PLatencyCheckPacket_IsEndCount_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionP2PLatencyCheckPacket_IsEndCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PLatencyCheckPacket_IsEndCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2PLatencyCheckPacket_IsEndCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2PLatencyCheckPacket.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2PLatencyCheckPacket_IsEndCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2PLatencyCheckPacket, nullptr, "IsEndCount", nullptr, nullptr, sizeof(EOSSessionP2PLatencyCheckPacket_eventIsEndCount_Parms), Z_Construct_UFunction_UEOSSessionP2PLatencyCheckPacket_IsEndCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PLatencyCheckPacket_IsEndCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2PLatencyCheckPacket_IsEndCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PLatencyCheckPacket_IsEndCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2PLatencyCheckPacket_IsEndCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2PLatencyCheckPacket_IsEndCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionP2PLatencyCheckPacket_IsFirstUser_Statics
	{
		struct EOSSessionP2PLatencyCheckPacket_eventIsFirstUser_Parms
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
	void Z_Construct_UFunction_UEOSSessionP2PLatencyCheckPacket_IsFirstUser_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSSessionP2PLatencyCheckPacket_eventIsFirstUser_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSSessionP2PLatencyCheckPacket_IsFirstUser_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSSessionP2PLatencyCheckPacket_eventIsFirstUser_Parms), &Z_Construct_UFunction_UEOSSessionP2PLatencyCheckPacket_IsFirstUser_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionP2PLatencyCheckPacket_IsFirstUser_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PLatencyCheckPacket_IsFirstUser_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2PLatencyCheckPacket_IsFirstUser_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2PLatencyCheckPacket.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2PLatencyCheckPacket_IsFirstUser_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2PLatencyCheckPacket, nullptr, "IsFirstUser", nullptr, nullptr, sizeof(EOSSessionP2PLatencyCheckPacket_eventIsFirstUser_Parms), Z_Construct_UFunction_UEOSSessionP2PLatencyCheckPacket_IsFirstUser_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PLatencyCheckPacket_IsFirstUser_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2PLatencyCheckPacket_IsFirstUser_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PLatencyCheckPacket_IsFirstUser_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2PLatencyCheckPacket_IsFirstUser()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2PLatencyCheckPacket_IsFirstUser_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionP2PLatencyCheckPacket_IsStartedMeasure_Statics
	{
		struct EOSSessionP2PLatencyCheckPacket_eventIsStartedMeasure_Parms
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
	void Z_Construct_UFunction_UEOSSessionP2PLatencyCheckPacket_IsStartedMeasure_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSSessionP2PLatencyCheckPacket_eventIsStartedMeasure_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSSessionP2PLatencyCheckPacket_IsStartedMeasure_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSSessionP2PLatencyCheckPacket_eventIsStartedMeasure_Parms), &Z_Construct_UFunction_UEOSSessionP2PLatencyCheckPacket_IsStartedMeasure_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionP2PLatencyCheckPacket_IsStartedMeasure_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PLatencyCheckPacket_IsStartedMeasure_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2PLatencyCheckPacket_IsStartedMeasure_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2PLatencyCheckPacket.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2PLatencyCheckPacket_IsStartedMeasure_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2PLatencyCheckPacket, nullptr, "IsStartedMeasure", nullptr, nullptr, sizeof(EOSSessionP2PLatencyCheckPacket_eventIsStartedMeasure_Parms), Z_Construct_UFunction_UEOSSessionP2PLatencyCheckPacket_IsStartedMeasure_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PLatencyCheckPacket_IsStartedMeasure_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2PLatencyCheckPacket_IsStartedMeasure_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PLatencyCheckPacket_IsStartedMeasure_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2PLatencyCheckPacket_IsStartedMeasure()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2PLatencyCheckPacket_IsStartedMeasure_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionP2PLatencyCheckPacket_Measure_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2PLatencyCheckPacket_Measure_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2PLatencyCheckPacket.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2PLatencyCheckPacket_Measure_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2PLatencyCheckPacket, nullptr, "Measure", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2PLatencyCheckPacket_Measure_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PLatencyCheckPacket_Measure_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2PLatencyCheckPacket_Measure()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2PLatencyCheckPacket_Measure_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionP2PLatencyCheckPacket_MeasureAndIncremnt_Statics
	{
		struct EOSSessionP2PLatencyCheckPacket_eventMeasureAndIncremnt_Parms
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
	void Z_Construct_UFunction_UEOSSessionP2PLatencyCheckPacket_MeasureAndIncremnt_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSSessionP2PLatencyCheckPacket_eventMeasureAndIncremnt_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSSessionP2PLatencyCheckPacket_MeasureAndIncremnt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSSessionP2PLatencyCheckPacket_eventMeasureAndIncremnt_Parms), &Z_Construct_UFunction_UEOSSessionP2PLatencyCheckPacket_MeasureAndIncremnt_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionP2PLatencyCheckPacket_MeasureAndIncremnt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PLatencyCheckPacket_MeasureAndIncremnt_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2PLatencyCheckPacket_MeasureAndIncremnt_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2PLatencyCheckPacket.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2PLatencyCheckPacket_MeasureAndIncremnt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2PLatencyCheckPacket, nullptr, "MeasureAndIncremnt", nullptr, nullptr, sizeof(EOSSessionP2PLatencyCheckPacket_eventMeasureAndIncremnt_Parms), Z_Construct_UFunction_UEOSSessionP2PLatencyCheckPacket_MeasureAndIncremnt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PLatencyCheckPacket_MeasureAndIncremnt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2PLatencyCheckPacket_MeasureAndIncremnt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PLatencyCheckPacket_MeasureAndIncremnt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2PLatencyCheckPacket_MeasureAndIncremnt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2PLatencyCheckPacket_MeasureAndIncremnt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionP2PLatencyCheckPacket_Reset_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2PLatencyCheckPacket_Reset_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2PLatencyCheckPacket.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2PLatencyCheckPacket_Reset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2PLatencyCheckPacket, nullptr, "Reset", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2PLatencyCheckPacket_Reset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PLatencyCheckPacket_Reset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2PLatencyCheckPacket_Reset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2PLatencyCheckPacket_Reset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEOSSessionP2PLatencyCheckPacket_NoRegister()
	{
		return UEOSSessionP2PLatencyCheckPacket::StaticClass();
	}
	struct Z_Construct_UClass_UEOSSessionP2PLatencyCheckPacket_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEOSSessionP2PLatencyCheckPacket_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEOSSessionP2PPacketBase,
		(UObject* (*)())Z_Construct_UPackage__Script_yEOSSDK,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEOSSessionP2PLatencyCheckPacket_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEOSSessionP2PLatencyCheckPacket_CheckTimeout, "CheckTimeout" }, // 673461227
		{ &Z_Construct_UFunction_UEOSSessionP2PLatencyCheckPacket_GetAverage, "GetAverage" }, // 893419026
		{ &Z_Construct_UFunction_UEOSSessionP2PLatencyCheckPacket_GetMax, "GetMax" }, // 1220520914
		{ &Z_Construct_UFunction_UEOSSessionP2PLatencyCheckPacket_GetMin, "GetMin" }, // 4025482075
		{ &Z_Construct_UFunction_UEOSSessionP2PLatencyCheckPacket_IsEndCount, "IsEndCount" }, // 2660924170
		{ &Z_Construct_UFunction_UEOSSessionP2PLatencyCheckPacket_IsFirstUser, "IsFirstUser" }, // 1804211105
		{ &Z_Construct_UFunction_UEOSSessionP2PLatencyCheckPacket_IsStartedMeasure, "IsStartedMeasure" }, // 1126982017
		{ &Z_Construct_UFunction_UEOSSessionP2PLatencyCheckPacket_Measure, "Measure" }, // 1868553543
		{ &Z_Construct_UFunction_UEOSSessionP2PLatencyCheckPacket_MeasureAndIncremnt, "MeasureAndIncremnt" }, // 1025907560
		{ &Z_Construct_UFunction_UEOSSessionP2PLatencyCheckPacket_Reset, "Reset" }, // 3982232006
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSSessionP2PLatencyCheckPacket_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "EOSSessionP2PLatencyCheckPacket.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/EOSSessionP2PLatencyCheckPacket.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEOSSessionP2PLatencyCheckPacket_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEOSSessionP2PLatencyCheckPacket>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEOSSessionP2PLatencyCheckPacket_Statics::ClassParams = {
		&UEOSSessionP2PLatencyCheckPacket::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UEOSSessionP2PLatencyCheckPacket_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSSessionP2PLatencyCheckPacket_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEOSSessionP2PLatencyCheckPacket()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEOSSessionP2PLatencyCheckPacket_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEOSSessionP2PLatencyCheckPacket, 1505055488);
	template<> YEOSSDK_API UClass* StaticClass<UEOSSessionP2PLatencyCheckPacket>()
	{
		return UEOSSessionP2PLatencyCheckPacket::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEOSSessionP2PLatencyCheckPacket(Z_Construct_UClass_UEOSSessionP2PLatencyCheckPacket, &UEOSSessionP2PLatencyCheckPacket::StaticClass, TEXT("/Script/yEOSSDK"), TEXT("UEOSSessionP2PLatencyCheckPacket"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEOSSessionP2PLatencyCheckPacket);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
