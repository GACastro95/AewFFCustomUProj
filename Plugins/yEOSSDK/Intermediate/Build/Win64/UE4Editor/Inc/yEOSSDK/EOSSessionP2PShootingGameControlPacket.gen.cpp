// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yEOSSDK/Public/EOSSessionP2PShootingGameControlPacket.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOSSessionP2PShootingGameControlPacket() {}
// Cross Module References
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSSessionP2PShootingGameControlPacket_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSSessionP2PShootingGameControlPacket();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSSessionP2PPacketBase();
	UPackage* Z_Construct_UPackage__Script_yEOSSDK();
	YEOSSDK_API UScriptStruct* Z_Construct_UScriptStruct_FEOSSessionP2PShootingGameControlData();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
// End Cross Module References
	DEFINE_FUNCTION(UEOSSessionP2PShootingGameControlPacket::execAppendControlBits)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__sControlBits);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AppendControlBits(Z_Param__sControlBits);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSessionP2PShootingGameControlPacket::execGetControlBits)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetControlBits();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSessionP2PShootingGameControlPacket::execGetControlData)
	{
		P_GET_STRUCT_REF(FEOSSessionP2PShootingGameControlData,Z_Param_Out__stControlData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetControlData(Z_Param_Out__stControlData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSessionP2PShootingGameControlPacket::execGetTransform)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=P_THIS->GetTransform();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSessionP2PShootingGameControlPacket::execGetValue)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__sControlType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetValue(Z_Param__sControlType);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSessionP2PShootingGameControlPacket::execSend)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Send();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSessionP2PShootingGameControlPacket::execSetControlBits)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__sControlBits);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetControlBits(Z_Param__sControlBits);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSessionP2PShootingGameControlPacket::execSetControlValue)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__sControlType);
		P_GET_PROPERTY(FFloatProperty,Z_Param__fValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetControlValue(Z_Param__sControlType,Z_Param__fValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSessionP2PShootingGameControlPacket::execSetTime)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__sGameFrame);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTime(Z_Param__sGameFrame);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSessionP2PShootingGameControlPacket::execSetTransform)
	{
		P_GET_STRUCT(FTransform,Z_Param__stTransform);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTransform(Z_Param__stTransform);
		P_NATIVE_END;
	}
	void UEOSSessionP2PShootingGameControlPacket::StaticRegisterNativesUEOSSessionP2PShootingGameControlPacket()
	{
		UClass* Class = UEOSSessionP2PShootingGameControlPacket::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AppendControlBits", &UEOSSessionP2PShootingGameControlPacket::execAppendControlBits },
			{ "GetControlBits", &UEOSSessionP2PShootingGameControlPacket::execGetControlBits },
			{ "GetControlData", &UEOSSessionP2PShootingGameControlPacket::execGetControlData },
			{ "GetTransform", &UEOSSessionP2PShootingGameControlPacket::execGetTransform },
			{ "GetValue", &UEOSSessionP2PShootingGameControlPacket::execGetValue },
			{ "Send", &UEOSSessionP2PShootingGameControlPacket::execSend },
			{ "SetControlBits", &UEOSSessionP2PShootingGameControlPacket::execSetControlBits },
			{ "SetControlValue", &UEOSSessionP2PShootingGameControlPacket::execSetControlValue },
			{ "SetTime", &UEOSSessionP2PShootingGameControlPacket::execSetTime },
			{ "SetTransform", &UEOSSessionP2PShootingGameControlPacket::execSetTransform },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEOSSessionP2PShootingGameControlPacket_AppendControlBits_Statics
	{
		struct EOSSessionP2PShootingGameControlPacket_eventAppendControlBits_Parms
		{
			int32 _sControlBits;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__sControlBits;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEOSSessionP2PShootingGameControlPacket_AppendControlBits_Statics::NewProp__sControlBits = { "_sControlBits", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2PShootingGameControlPacket_eventAppendControlBits_Parms, _sControlBits), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionP2PShootingGameControlPacket_AppendControlBits_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PShootingGameControlPacket_AppendControlBits_Statics::NewProp__sControlBits,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2PShootingGameControlPacket_AppendControlBits_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2PShootingGameControlPacket.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2PShootingGameControlPacket_AppendControlBits_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2PShootingGameControlPacket, nullptr, "AppendControlBits", nullptr, nullptr, sizeof(EOSSessionP2PShootingGameControlPacket_eventAppendControlBits_Parms), Z_Construct_UFunction_UEOSSessionP2PShootingGameControlPacket_AppendControlBits_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PShootingGameControlPacket_AppendControlBits_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2PShootingGameControlPacket_AppendControlBits_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PShootingGameControlPacket_AppendControlBits_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2PShootingGameControlPacket_AppendControlBits()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2PShootingGameControlPacket_AppendControlBits_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionP2PShootingGameControlPacket_GetControlBits_Statics
	{
		struct EOSSessionP2PShootingGameControlPacket_eventGetControlBits_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEOSSessionP2PShootingGameControlPacket_GetControlBits_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2PShootingGameControlPacket_eventGetControlBits_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionP2PShootingGameControlPacket_GetControlBits_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PShootingGameControlPacket_GetControlBits_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2PShootingGameControlPacket_GetControlBits_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2PShootingGameControlPacket.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2PShootingGameControlPacket_GetControlBits_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2PShootingGameControlPacket, nullptr, "GetControlBits", nullptr, nullptr, sizeof(EOSSessionP2PShootingGameControlPacket_eventGetControlBits_Parms), Z_Construct_UFunction_UEOSSessionP2PShootingGameControlPacket_GetControlBits_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PShootingGameControlPacket_GetControlBits_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2PShootingGameControlPacket_GetControlBits_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PShootingGameControlPacket_GetControlBits_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2PShootingGameControlPacket_GetControlBits()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2PShootingGameControlPacket_GetControlBits_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionP2PShootingGameControlPacket_GetControlData_Statics
	{
		struct EOSSessionP2PShootingGameControlPacket_eventGetControlData_Parms
		{
			FEOSSessionP2PShootingGameControlData _stControlData;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__stControlData;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEOSSessionP2PShootingGameControlPacket_GetControlData_Statics::NewProp__stControlData = { "_stControlData", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2PShootingGameControlPacket_eventGetControlData_Parms, _stControlData), Z_Construct_UScriptStruct_FEOSSessionP2PShootingGameControlData, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSSessionP2PShootingGameControlPacket_GetControlData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSSessionP2PShootingGameControlPacket_eventGetControlData_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSSessionP2PShootingGameControlPacket_GetControlData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSSessionP2PShootingGameControlPacket_eventGetControlData_Parms), &Z_Construct_UFunction_UEOSSessionP2PShootingGameControlPacket_GetControlData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionP2PShootingGameControlPacket_GetControlData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PShootingGameControlPacket_GetControlData_Statics::NewProp__stControlData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PShootingGameControlPacket_GetControlData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2PShootingGameControlPacket_GetControlData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2PShootingGameControlPacket.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2PShootingGameControlPacket_GetControlData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2PShootingGameControlPacket, nullptr, "GetControlData", nullptr, nullptr, sizeof(EOSSessionP2PShootingGameControlPacket_eventGetControlData_Parms), Z_Construct_UFunction_UEOSSessionP2PShootingGameControlPacket_GetControlData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PShootingGameControlPacket_GetControlData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2PShootingGameControlPacket_GetControlData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PShootingGameControlPacket_GetControlData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2PShootingGameControlPacket_GetControlData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2PShootingGameControlPacket_GetControlData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionP2PShootingGameControlPacket_GetTransform_Statics
	{
		struct EOSSessionP2PShootingGameControlPacket_eventGetTransform_Parms
		{
			FTransform ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEOSSessionP2PShootingGameControlPacket_GetTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2PShootingGameControlPacket_eventGetTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionP2PShootingGameControlPacket_GetTransform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PShootingGameControlPacket_GetTransform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2PShootingGameControlPacket_GetTransform_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2PShootingGameControlPacket.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2PShootingGameControlPacket_GetTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2PShootingGameControlPacket, nullptr, "GetTransform", nullptr, nullptr, sizeof(EOSSessionP2PShootingGameControlPacket_eventGetTransform_Parms), Z_Construct_UFunction_UEOSSessionP2PShootingGameControlPacket_GetTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PShootingGameControlPacket_GetTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2PShootingGameControlPacket_GetTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PShootingGameControlPacket_GetTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2PShootingGameControlPacket_GetTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2PShootingGameControlPacket_GetTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionP2PShootingGameControlPacket_GetValue_Statics
	{
		struct EOSSessionP2PShootingGameControlPacket_eventGetValue_Parms
		{
			int32 _sControlType;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__sControlType;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEOSSessionP2PShootingGameControlPacket_GetValue_Statics::NewProp__sControlType = { "_sControlType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2PShootingGameControlPacket_eventGetValue_Parms, _sControlType), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UEOSSessionP2PShootingGameControlPacket_GetValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2PShootingGameControlPacket_eventGetValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionP2PShootingGameControlPacket_GetValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PShootingGameControlPacket_GetValue_Statics::NewProp__sControlType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PShootingGameControlPacket_GetValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2PShootingGameControlPacket_GetValue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2PShootingGameControlPacket.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2PShootingGameControlPacket_GetValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2PShootingGameControlPacket, nullptr, "GetValue", nullptr, nullptr, sizeof(EOSSessionP2PShootingGameControlPacket_eventGetValue_Parms), Z_Construct_UFunction_UEOSSessionP2PShootingGameControlPacket_GetValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PShootingGameControlPacket_GetValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2PShootingGameControlPacket_GetValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PShootingGameControlPacket_GetValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2PShootingGameControlPacket_GetValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2PShootingGameControlPacket_GetValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionP2PShootingGameControlPacket_Send_Statics
	{
		struct EOSSessionP2PShootingGameControlPacket_eventSend_Parms
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
	void Z_Construct_UFunction_UEOSSessionP2PShootingGameControlPacket_Send_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSSessionP2PShootingGameControlPacket_eventSend_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSSessionP2PShootingGameControlPacket_Send_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSSessionP2PShootingGameControlPacket_eventSend_Parms), &Z_Construct_UFunction_UEOSSessionP2PShootingGameControlPacket_Send_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionP2PShootingGameControlPacket_Send_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PShootingGameControlPacket_Send_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2PShootingGameControlPacket_Send_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2PShootingGameControlPacket.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2PShootingGameControlPacket_Send_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2PShootingGameControlPacket, nullptr, "Send", nullptr, nullptr, sizeof(EOSSessionP2PShootingGameControlPacket_eventSend_Parms), Z_Construct_UFunction_UEOSSessionP2PShootingGameControlPacket_Send_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PShootingGameControlPacket_Send_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2PShootingGameControlPacket_Send_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PShootingGameControlPacket_Send_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2PShootingGameControlPacket_Send()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2PShootingGameControlPacket_Send_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionP2PShootingGameControlPacket_SetControlBits_Statics
	{
		struct EOSSessionP2PShootingGameControlPacket_eventSetControlBits_Parms
		{
			int32 _sControlBits;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__sControlBits;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEOSSessionP2PShootingGameControlPacket_SetControlBits_Statics::NewProp__sControlBits = { "_sControlBits", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2PShootingGameControlPacket_eventSetControlBits_Parms, _sControlBits), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionP2PShootingGameControlPacket_SetControlBits_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PShootingGameControlPacket_SetControlBits_Statics::NewProp__sControlBits,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2PShootingGameControlPacket_SetControlBits_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2PShootingGameControlPacket.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2PShootingGameControlPacket_SetControlBits_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2PShootingGameControlPacket, nullptr, "SetControlBits", nullptr, nullptr, sizeof(EOSSessionP2PShootingGameControlPacket_eventSetControlBits_Parms), Z_Construct_UFunction_UEOSSessionP2PShootingGameControlPacket_SetControlBits_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PShootingGameControlPacket_SetControlBits_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2PShootingGameControlPacket_SetControlBits_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PShootingGameControlPacket_SetControlBits_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2PShootingGameControlPacket_SetControlBits()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2PShootingGameControlPacket_SetControlBits_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionP2PShootingGameControlPacket_SetControlValue_Statics
	{
		struct EOSSessionP2PShootingGameControlPacket_eventSetControlValue_Parms
		{
			int32 _sControlType;
			float _fValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__sControlType;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__fValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEOSSessionP2PShootingGameControlPacket_SetControlValue_Statics::NewProp__sControlType = { "_sControlType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2PShootingGameControlPacket_eventSetControlValue_Parms, _sControlType), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UEOSSessionP2PShootingGameControlPacket_SetControlValue_Statics::NewProp__fValue = { "_fValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2PShootingGameControlPacket_eventSetControlValue_Parms, _fValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionP2PShootingGameControlPacket_SetControlValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PShootingGameControlPacket_SetControlValue_Statics::NewProp__sControlType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PShootingGameControlPacket_SetControlValue_Statics::NewProp__fValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2PShootingGameControlPacket_SetControlValue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2PShootingGameControlPacket.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2PShootingGameControlPacket_SetControlValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2PShootingGameControlPacket, nullptr, "SetControlValue", nullptr, nullptr, sizeof(EOSSessionP2PShootingGameControlPacket_eventSetControlValue_Parms), Z_Construct_UFunction_UEOSSessionP2PShootingGameControlPacket_SetControlValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PShootingGameControlPacket_SetControlValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2PShootingGameControlPacket_SetControlValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PShootingGameControlPacket_SetControlValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2PShootingGameControlPacket_SetControlValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2PShootingGameControlPacket_SetControlValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionP2PShootingGameControlPacket_SetTime_Statics
	{
		struct EOSSessionP2PShootingGameControlPacket_eventSetTime_Parms
		{
			int32 _sGameFrame;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__sGameFrame;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEOSSessionP2PShootingGameControlPacket_SetTime_Statics::NewProp__sGameFrame = { "_sGameFrame", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2PShootingGameControlPacket_eventSetTime_Parms, _sGameFrame), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionP2PShootingGameControlPacket_SetTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PShootingGameControlPacket_SetTime_Statics::NewProp__sGameFrame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2PShootingGameControlPacket_SetTime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2PShootingGameControlPacket.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2PShootingGameControlPacket_SetTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2PShootingGameControlPacket, nullptr, "SetTime", nullptr, nullptr, sizeof(EOSSessionP2PShootingGameControlPacket_eventSetTime_Parms), Z_Construct_UFunction_UEOSSessionP2PShootingGameControlPacket_SetTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PShootingGameControlPacket_SetTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2PShootingGameControlPacket_SetTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PShootingGameControlPacket_SetTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2PShootingGameControlPacket_SetTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2PShootingGameControlPacket_SetTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionP2PShootingGameControlPacket_SetTransform_Statics
	{
		struct EOSSessionP2PShootingGameControlPacket_eventSetTransform_Parms
		{
			FTransform _stTransform;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__stTransform;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEOSSessionP2PShootingGameControlPacket_SetTransform_Statics::NewProp__stTransform = { "_stTransform", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2PShootingGameControlPacket_eventSetTransform_Parms, _stTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionP2PShootingGameControlPacket_SetTransform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PShootingGameControlPacket_SetTransform_Statics::NewProp__stTransform,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2PShootingGameControlPacket_SetTransform_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2PShootingGameControlPacket.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2PShootingGameControlPacket_SetTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2PShootingGameControlPacket, nullptr, "SetTransform", nullptr, nullptr, sizeof(EOSSessionP2PShootingGameControlPacket_eventSetTransform_Parms), Z_Construct_UFunction_UEOSSessionP2PShootingGameControlPacket_SetTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PShootingGameControlPacket_SetTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2PShootingGameControlPacket_SetTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PShootingGameControlPacket_SetTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2PShootingGameControlPacket_SetTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2PShootingGameControlPacket_SetTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEOSSessionP2PShootingGameControlPacket_NoRegister()
	{
		return UEOSSessionP2PShootingGameControlPacket::StaticClass();
	}
	struct Z_Construct_UClass_UEOSSessionP2PShootingGameControlPacket_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEOSSessionP2PShootingGameControlPacket_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEOSSessionP2PPacketBase,
		(UObject* (*)())Z_Construct_UPackage__Script_yEOSSDK,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEOSSessionP2PShootingGameControlPacket_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEOSSessionP2PShootingGameControlPacket_AppendControlBits, "AppendControlBits" }, // 3589386059
		{ &Z_Construct_UFunction_UEOSSessionP2PShootingGameControlPacket_GetControlBits, "GetControlBits" }, // 3286018651
		{ &Z_Construct_UFunction_UEOSSessionP2PShootingGameControlPacket_GetControlData, "GetControlData" }, // 1768993441
		{ &Z_Construct_UFunction_UEOSSessionP2PShootingGameControlPacket_GetTransform, "GetTransform" }, // 1813000606
		{ &Z_Construct_UFunction_UEOSSessionP2PShootingGameControlPacket_GetValue, "GetValue" }, // 1501278201
		{ &Z_Construct_UFunction_UEOSSessionP2PShootingGameControlPacket_Send, "Send" }, // 2539844326
		{ &Z_Construct_UFunction_UEOSSessionP2PShootingGameControlPacket_SetControlBits, "SetControlBits" }, // 4219659502
		{ &Z_Construct_UFunction_UEOSSessionP2PShootingGameControlPacket_SetControlValue, "SetControlValue" }, // 3878114340
		{ &Z_Construct_UFunction_UEOSSessionP2PShootingGameControlPacket_SetTime, "SetTime" }, // 3428604388
		{ &Z_Construct_UFunction_UEOSSessionP2PShootingGameControlPacket_SetTransform, "SetTransform" }, // 882541292
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSSessionP2PShootingGameControlPacket_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "EOSSessionP2PShootingGameControlPacket.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/EOSSessionP2PShootingGameControlPacket.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEOSSessionP2PShootingGameControlPacket_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEOSSessionP2PShootingGameControlPacket>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEOSSessionP2PShootingGameControlPacket_Statics::ClassParams = {
		&UEOSSessionP2PShootingGameControlPacket::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UEOSSessionP2PShootingGameControlPacket_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSSessionP2PShootingGameControlPacket_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEOSSessionP2PShootingGameControlPacket()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEOSSessionP2PShootingGameControlPacket_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEOSSessionP2PShootingGameControlPacket, 1177283089);
	template<> YEOSSDK_API UClass* StaticClass<UEOSSessionP2PShootingGameControlPacket>()
	{
		return UEOSSessionP2PShootingGameControlPacket::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEOSSessionP2PShootingGameControlPacket(Z_Construct_UClass_UEOSSessionP2PShootingGameControlPacket, &UEOSSessionP2PShootingGameControlPacket::StaticClass, TEXT("/Script/yEOSSDK"), TEXT("UEOSSessionP2PShootingGameControlPacket"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEOSSessionP2PShootingGameControlPacket);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
