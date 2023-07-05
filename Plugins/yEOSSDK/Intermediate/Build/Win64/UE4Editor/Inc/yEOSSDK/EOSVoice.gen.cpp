// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yEOSSDK/Public/EOSVoice.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOSVoice() {}
// Cross Module References
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSVoice_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSVoice();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSIDs();
	UPackage* Z_Construct_UPackage__Script_yEOSSDK();
	YEOSSDK_API UScriptStruct* Z_Construct_UScriptStruct_FEOSVoiceDeviceInfo();
	YEOSSDK_API UScriptStruct* Z_Construct_UScriptStruct_FEOSVoiceAPIVersionSettings();
	YEOSSDK_API UFunction* Z_Construct_UDelegateFunction_yEOSSDK_EOSVoiceEventDispatcher__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UEOSVoice::execGetInputDeviceId)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetInputDeviceId();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSVoice::execGetInputDeviceList)
	{
		P_GET_TARRAY_REF(FEOSVoiceDeviceInfo,Z_Param_Out_DeviceInfoList);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetInputDeviceList(Z_Param_Out_DeviceInfoList);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSVoice::execGetInputVolume)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetInputVolume();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSVoice::execGetOutputDeviceId)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetOutputDeviceId();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSVoice::execGetOutputDeviceList)
	{
		P_GET_TARRAY_REF(FEOSVoiceDeviceInfo,Z_Param_Out_DeviceInfoList);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetOutputDeviceList(Z_Param_Out_DeviceInfoList);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSVoice::execGetOutputVolume)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetOutputVolume();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSVoice::execSetApiVersion)
	{
		P_GET_STRUCT(FEOSVoiceAPIVersionSettings,Z_Param__stAPIVerSetting);
		P_FINISH;
		P_NATIVE_BEGIN;
		UEOSVoice::SetApiVersion(Z_Param__stAPIVerSetting);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSVoice::execSetInputDeviceId)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__strDeviceId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetInputDeviceId(Z_Param__strDeviceId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSVoice::execSetInputVolume)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param__fVolume);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetInputVolume(Z_Param__fVolume);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSVoice::execSetOutputDeviceId)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__strDeviceId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetOutputDeviceId(Z_Param__strDeviceId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSVoice::execSetOutputVolume)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param__fVolume);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetOutputVolume(Z_Param__fVolume);
		P_NATIVE_END;
	}
	void UEOSVoice::StaticRegisterNativesUEOSVoice()
	{
		UClass* Class = UEOSVoice::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetInputDeviceId", &UEOSVoice::execGetInputDeviceId },
			{ "GetInputDeviceList", &UEOSVoice::execGetInputDeviceList },
			{ "GetInputVolume", &UEOSVoice::execGetInputVolume },
			{ "GetOutputDeviceId", &UEOSVoice::execGetOutputDeviceId },
			{ "GetOutputDeviceList", &UEOSVoice::execGetOutputDeviceList },
			{ "GetOutputVolume", &UEOSVoice::execGetOutputVolume },
			{ "SetApiVersion", &UEOSVoice::execSetApiVersion },
			{ "SetInputDeviceId", &UEOSVoice::execSetInputDeviceId },
			{ "SetInputVolume", &UEOSVoice::execSetInputVolume },
			{ "SetOutputDeviceId", &UEOSVoice::execSetOutputDeviceId },
			{ "SetOutputVolume", &UEOSVoice::execSetOutputVolume },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEOSVoice_GetInputDeviceId_Statics
	{
		struct EOSVoice_eventGetInputDeviceId_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSVoice_GetInputDeviceId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSVoice_eventGetInputDeviceId_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSVoice_GetInputDeviceId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSVoice_GetInputDeviceId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSVoice_GetInputDeviceId_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSVoice.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSVoice_GetInputDeviceId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSVoice, nullptr, "GetInputDeviceId", nullptr, nullptr, sizeof(EOSVoice_eventGetInputDeviceId_Parms), Z_Construct_UFunction_UEOSVoice_GetInputDeviceId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSVoice_GetInputDeviceId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSVoice_GetInputDeviceId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSVoice_GetInputDeviceId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSVoice_GetInputDeviceId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSVoice_GetInputDeviceId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSVoice_GetInputDeviceList_Statics
	{
		struct EOSVoice_eventGetInputDeviceList_Parms
		{
			TArray<FEOSVoiceDeviceInfo> DeviceInfoList;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DeviceInfoList_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DeviceInfoList;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEOSVoice_GetInputDeviceList_Statics::NewProp_DeviceInfoList_Inner = { "DeviceInfoList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FEOSVoiceDeviceInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEOSVoice_GetInputDeviceList_Statics::NewProp_DeviceInfoList = { "DeviceInfoList", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSVoice_eventGetInputDeviceList_Parms, DeviceInfoList), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSVoice_GetInputDeviceList_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSVoice_eventGetInputDeviceList_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSVoice_GetInputDeviceList_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSVoice_eventGetInputDeviceList_Parms), &Z_Construct_UFunction_UEOSVoice_GetInputDeviceList_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSVoice_GetInputDeviceList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSVoice_GetInputDeviceList_Statics::NewProp_DeviceInfoList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSVoice_GetInputDeviceList_Statics::NewProp_DeviceInfoList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSVoice_GetInputDeviceList_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSVoice_GetInputDeviceList_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSVoice.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSVoice_GetInputDeviceList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSVoice, nullptr, "GetInputDeviceList", nullptr, nullptr, sizeof(EOSVoice_eventGetInputDeviceList_Parms), Z_Construct_UFunction_UEOSVoice_GetInputDeviceList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSVoice_GetInputDeviceList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSVoice_GetInputDeviceList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSVoice_GetInputDeviceList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSVoice_GetInputDeviceList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSVoice_GetInputDeviceList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSVoice_GetInputVolume_Statics
	{
		struct EOSVoice_eventGetInputVolume_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UEOSVoice_GetInputVolume_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSVoice_eventGetInputVolume_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSVoice_GetInputVolume_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSVoice_GetInputVolume_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSVoice_GetInputVolume_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSVoice.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSVoice_GetInputVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSVoice, nullptr, "GetInputVolume", nullptr, nullptr, sizeof(EOSVoice_eventGetInputVolume_Parms), Z_Construct_UFunction_UEOSVoice_GetInputVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSVoice_GetInputVolume_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSVoice_GetInputVolume_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSVoice_GetInputVolume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSVoice_GetInputVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSVoice_GetInputVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSVoice_GetOutputDeviceId_Statics
	{
		struct EOSVoice_eventGetOutputDeviceId_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSVoice_GetOutputDeviceId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSVoice_eventGetOutputDeviceId_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSVoice_GetOutputDeviceId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSVoice_GetOutputDeviceId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSVoice_GetOutputDeviceId_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSVoice.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSVoice_GetOutputDeviceId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSVoice, nullptr, "GetOutputDeviceId", nullptr, nullptr, sizeof(EOSVoice_eventGetOutputDeviceId_Parms), Z_Construct_UFunction_UEOSVoice_GetOutputDeviceId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSVoice_GetOutputDeviceId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSVoice_GetOutputDeviceId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSVoice_GetOutputDeviceId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSVoice_GetOutputDeviceId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSVoice_GetOutputDeviceId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSVoice_GetOutputDeviceList_Statics
	{
		struct EOSVoice_eventGetOutputDeviceList_Parms
		{
			TArray<FEOSVoiceDeviceInfo> DeviceInfoList;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DeviceInfoList_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DeviceInfoList;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEOSVoice_GetOutputDeviceList_Statics::NewProp_DeviceInfoList_Inner = { "DeviceInfoList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FEOSVoiceDeviceInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEOSVoice_GetOutputDeviceList_Statics::NewProp_DeviceInfoList = { "DeviceInfoList", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSVoice_eventGetOutputDeviceList_Parms, DeviceInfoList), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSVoice_GetOutputDeviceList_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSVoice_eventGetOutputDeviceList_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSVoice_GetOutputDeviceList_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSVoice_eventGetOutputDeviceList_Parms), &Z_Construct_UFunction_UEOSVoice_GetOutputDeviceList_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSVoice_GetOutputDeviceList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSVoice_GetOutputDeviceList_Statics::NewProp_DeviceInfoList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSVoice_GetOutputDeviceList_Statics::NewProp_DeviceInfoList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSVoice_GetOutputDeviceList_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSVoice_GetOutputDeviceList_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSVoice.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSVoice_GetOutputDeviceList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSVoice, nullptr, "GetOutputDeviceList", nullptr, nullptr, sizeof(EOSVoice_eventGetOutputDeviceList_Parms), Z_Construct_UFunction_UEOSVoice_GetOutputDeviceList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSVoice_GetOutputDeviceList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSVoice_GetOutputDeviceList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSVoice_GetOutputDeviceList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSVoice_GetOutputDeviceList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSVoice_GetOutputDeviceList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSVoice_GetOutputVolume_Statics
	{
		struct EOSVoice_eventGetOutputVolume_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UEOSVoice_GetOutputVolume_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSVoice_eventGetOutputVolume_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSVoice_GetOutputVolume_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSVoice_GetOutputVolume_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSVoice_GetOutputVolume_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSVoice.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSVoice_GetOutputVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSVoice, nullptr, "GetOutputVolume", nullptr, nullptr, sizeof(EOSVoice_eventGetOutputVolume_Parms), Z_Construct_UFunction_UEOSVoice_GetOutputVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSVoice_GetOutputVolume_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSVoice_GetOutputVolume_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSVoice_GetOutputVolume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSVoice_GetOutputVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSVoice_GetOutputVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSVoice_SetApiVersion_Statics
	{
		struct EOSVoice_eventSetApiVersion_Parms
		{
			FEOSVoiceAPIVersionSettings _stAPIVerSetting;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__stAPIVerSetting;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEOSVoice_SetApiVersion_Statics::NewProp__stAPIVerSetting = { "_stAPIVerSetting", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSVoice_eventSetApiVersion_Parms, _stAPIVerSetting), Z_Construct_UScriptStruct_FEOSVoiceAPIVersionSettings, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSVoice_SetApiVersion_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSVoice_SetApiVersion_Statics::NewProp__stAPIVerSetting,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSVoice_SetApiVersion_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSVoice.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSVoice_SetApiVersion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSVoice, nullptr, "SetApiVersion", nullptr, nullptr, sizeof(EOSVoice_eventSetApiVersion_Parms), Z_Construct_UFunction_UEOSVoice_SetApiVersion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSVoice_SetApiVersion_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSVoice_SetApiVersion_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSVoice_SetApiVersion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSVoice_SetApiVersion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSVoice_SetApiVersion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSVoice_SetInputDeviceId_Statics
	{
		struct EOSVoice_eventSetInputDeviceId_Parms
		{
			FString _strDeviceId;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strDeviceId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strDeviceId;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSVoice_SetInputDeviceId_Statics::NewProp__strDeviceId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSVoice_SetInputDeviceId_Statics::NewProp__strDeviceId = { "_strDeviceId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSVoice_eventSetInputDeviceId_Parms, _strDeviceId), METADATA_PARAMS(Z_Construct_UFunction_UEOSVoice_SetInputDeviceId_Statics::NewProp__strDeviceId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSVoice_SetInputDeviceId_Statics::NewProp__strDeviceId_MetaData)) };
	void Z_Construct_UFunction_UEOSVoice_SetInputDeviceId_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSVoice_eventSetInputDeviceId_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSVoice_SetInputDeviceId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSVoice_eventSetInputDeviceId_Parms), &Z_Construct_UFunction_UEOSVoice_SetInputDeviceId_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSVoice_SetInputDeviceId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSVoice_SetInputDeviceId_Statics::NewProp__strDeviceId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSVoice_SetInputDeviceId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSVoice_SetInputDeviceId_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSVoice.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSVoice_SetInputDeviceId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSVoice, nullptr, "SetInputDeviceId", nullptr, nullptr, sizeof(EOSVoice_eventSetInputDeviceId_Parms), Z_Construct_UFunction_UEOSVoice_SetInputDeviceId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSVoice_SetInputDeviceId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSVoice_SetInputDeviceId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSVoice_SetInputDeviceId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSVoice_SetInputDeviceId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSVoice_SetInputDeviceId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSVoice_SetInputVolume_Statics
	{
		struct EOSVoice_eventSetInputVolume_Parms
		{
			float _fVolume;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__fVolume_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__fVolume;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSVoice_SetInputVolume_Statics::NewProp__fVolume_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UEOSVoice_SetInputVolume_Statics::NewProp__fVolume = { "_fVolume", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSVoice_eventSetInputVolume_Parms, _fVolume), METADATA_PARAMS(Z_Construct_UFunction_UEOSVoice_SetInputVolume_Statics::NewProp__fVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSVoice_SetInputVolume_Statics::NewProp__fVolume_MetaData)) };
	void Z_Construct_UFunction_UEOSVoice_SetInputVolume_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSVoice_eventSetInputVolume_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSVoice_SetInputVolume_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSVoice_eventSetInputVolume_Parms), &Z_Construct_UFunction_UEOSVoice_SetInputVolume_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSVoice_SetInputVolume_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSVoice_SetInputVolume_Statics::NewProp__fVolume,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSVoice_SetInputVolume_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSVoice_SetInputVolume_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSVoice.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSVoice_SetInputVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSVoice, nullptr, "SetInputVolume", nullptr, nullptr, sizeof(EOSVoice_eventSetInputVolume_Parms), Z_Construct_UFunction_UEOSVoice_SetInputVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSVoice_SetInputVolume_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSVoice_SetInputVolume_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSVoice_SetInputVolume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSVoice_SetInputVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSVoice_SetInputVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSVoice_SetOutputDeviceId_Statics
	{
		struct EOSVoice_eventSetOutputDeviceId_Parms
		{
			FString _strDeviceId;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strDeviceId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strDeviceId;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSVoice_SetOutputDeviceId_Statics::NewProp__strDeviceId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSVoice_SetOutputDeviceId_Statics::NewProp__strDeviceId = { "_strDeviceId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSVoice_eventSetOutputDeviceId_Parms, _strDeviceId), METADATA_PARAMS(Z_Construct_UFunction_UEOSVoice_SetOutputDeviceId_Statics::NewProp__strDeviceId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSVoice_SetOutputDeviceId_Statics::NewProp__strDeviceId_MetaData)) };
	void Z_Construct_UFunction_UEOSVoice_SetOutputDeviceId_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSVoice_eventSetOutputDeviceId_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSVoice_SetOutputDeviceId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSVoice_eventSetOutputDeviceId_Parms), &Z_Construct_UFunction_UEOSVoice_SetOutputDeviceId_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSVoice_SetOutputDeviceId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSVoice_SetOutputDeviceId_Statics::NewProp__strDeviceId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSVoice_SetOutputDeviceId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSVoice_SetOutputDeviceId_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSVoice.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSVoice_SetOutputDeviceId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSVoice, nullptr, "SetOutputDeviceId", nullptr, nullptr, sizeof(EOSVoice_eventSetOutputDeviceId_Parms), Z_Construct_UFunction_UEOSVoice_SetOutputDeviceId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSVoice_SetOutputDeviceId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSVoice_SetOutputDeviceId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSVoice_SetOutputDeviceId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSVoice_SetOutputDeviceId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSVoice_SetOutputDeviceId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSVoice_SetOutputVolume_Statics
	{
		struct EOSVoice_eventSetOutputVolume_Parms
		{
			float _fVolume;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__fVolume_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__fVolume;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSVoice_SetOutputVolume_Statics::NewProp__fVolume_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UEOSVoice_SetOutputVolume_Statics::NewProp__fVolume = { "_fVolume", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSVoice_eventSetOutputVolume_Parms, _fVolume), METADATA_PARAMS(Z_Construct_UFunction_UEOSVoice_SetOutputVolume_Statics::NewProp__fVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSVoice_SetOutputVolume_Statics::NewProp__fVolume_MetaData)) };
	void Z_Construct_UFunction_UEOSVoice_SetOutputVolume_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSVoice_eventSetOutputVolume_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSVoice_SetOutputVolume_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSVoice_eventSetOutputVolume_Parms), &Z_Construct_UFunction_UEOSVoice_SetOutputVolume_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSVoice_SetOutputVolume_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSVoice_SetOutputVolume_Statics::NewProp__fVolume,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSVoice_SetOutputVolume_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSVoice_SetOutputVolume_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSVoice.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSVoice_SetOutputVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSVoice, nullptr, "SetOutputVolume", nullptr, nullptr, sizeof(EOSVoice_eventSetOutputVolume_Parms), Z_Construct_UFunction_UEOSVoice_SetOutputVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSVoice_SetOutputVolume_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSVoice_SetOutputVolume_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSVoice_SetOutputVolume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSVoice_SetOutputVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSVoice_SetOutputVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEOSVoice_NoRegister()
	{
		return UEOSVoice::StaticClass();
	}
	struct Z_Construct_UClass_UEOSVoice_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VoiceEventDispatcher_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_VoiceEventDispatcher;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_strServiceUserId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_m_strServiceUserId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_strInputDeviceId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_m_strInputDeviceId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_strOutputDeviceId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_m_strOutputDeviceId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_fInputVolume_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_m_fInputVolume;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_fOutputVolume_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_m_fOutputVolume;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_sUserIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_m_sUserIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEOSVoice_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEOSIDs,
		(UObject* (*)())Z_Construct_UPackage__Script_yEOSSDK,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEOSVoice_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEOSVoice_GetInputDeviceId, "GetInputDeviceId" }, // 866996096
		{ &Z_Construct_UFunction_UEOSVoice_GetInputDeviceList, "GetInputDeviceList" }, // 2222134682
		{ &Z_Construct_UFunction_UEOSVoice_GetInputVolume, "GetInputVolume" }, // 4280649129
		{ &Z_Construct_UFunction_UEOSVoice_GetOutputDeviceId, "GetOutputDeviceId" }, // 1687861952
		{ &Z_Construct_UFunction_UEOSVoice_GetOutputDeviceList, "GetOutputDeviceList" }, // 2906290647
		{ &Z_Construct_UFunction_UEOSVoice_GetOutputVolume, "GetOutputVolume" }, // 2481972525
		{ &Z_Construct_UFunction_UEOSVoice_SetApiVersion, "SetApiVersion" }, // 3176716255
		{ &Z_Construct_UFunction_UEOSVoice_SetInputDeviceId, "SetInputDeviceId" }, // 1168115614
		{ &Z_Construct_UFunction_UEOSVoice_SetInputVolume, "SetInputVolume" }, // 2640156611
		{ &Z_Construct_UFunction_UEOSVoice_SetOutputDeviceId, "SetOutputDeviceId" }, // 1976360851
		{ &Z_Construct_UFunction_UEOSVoice_SetOutputVolume, "SetOutputVolume" }, // 1732621048
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSVoice_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "EOSVoice.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/EOSVoice.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSVoice_Statics::NewProp_VoiceEventDispatcher_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSVoice" },
		{ "ModuleRelativePath", "Public/EOSVoice.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEOSVoice_Statics::NewProp_VoiceEventDispatcher = { "VoiceEventDispatcher", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSVoice, VoiceEventDispatcher), Z_Construct_UDelegateFunction_yEOSSDK_EOSVoiceEventDispatcher__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UEOSVoice_Statics::NewProp_VoiceEventDispatcher_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSVoice_Statics::NewProp_VoiceEventDispatcher_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSVoice_Statics::NewProp_m_strServiceUserId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSVoice" },
		{ "ModuleRelativePath", "Public/EOSVoice.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEOSVoice_Statics::NewProp_m_strServiceUserId = { "m_strServiceUserId", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSVoice, m_strServiceUserId), METADATA_PARAMS(Z_Construct_UClass_UEOSVoice_Statics::NewProp_m_strServiceUserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSVoice_Statics::NewProp_m_strServiceUserId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSVoice_Statics::NewProp_m_strInputDeviceId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSVoice" },
		{ "ModuleRelativePath", "Public/EOSVoice.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEOSVoice_Statics::NewProp_m_strInputDeviceId = { "m_strInputDeviceId", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSVoice, m_strInputDeviceId), METADATA_PARAMS(Z_Construct_UClass_UEOSVoice_Statics::NewProp_m_strInputDeviceId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSVoice_Statics::NewProp_m_strInputDeviceId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSVoice_Statics::NewProp_m_strOutputDeviceId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSVoice" },
		{ "ModuleRelativePath", "Public/EOSVoice.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEOSVoice_Statics::NewProp_m_strOutputDeviceId = { "m_strOutputDeviceId", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSVoice, m_strOutputDeviceId), METADATA_PARAMS(Z_Construct_UClass_UEOSVoice_Statics::NewProp_m_strOutputDeviceId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSVoice_Statics::NewProp_m_strOutputDeviceId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSVoice_Statics::NewProp_m_fInputVolume_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSVoice" },
		{ "ModuleRelativePath", "Public/EOSVoice.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEOSVoice_Statics::NewProp_m_fInputVolume = { "m_fInputVolume", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSVoice, m_fInputVolume), METADATA_PARAMS(Z_Construct_UClass_UEOSVoice_Statics::NewProp_m_fInputVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSVoice_Statics::NewProp_m_fInputVolume_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSVoice_Statics::NewProp_m_fOutputVolume_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSVoice" },
		{ "ModuleRelativePath", "Public/EOSVoice.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEOSVoice_Statics::NewProp_m_fOutputVolume = { "m_fOutputVolume", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSVoice, m_fOutputVolume), METADATA_PARAMS(Z_Construct_UClass_UEOSVoice_Statics::NewProp_m_fOutputVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSVoice_Statics::NewProp_m_fOutputVolume_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSVoice_Statics::NewProp_m_sUserIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSVoice" },
		{ "ModuleRelativePath", "Public/EOSVoice.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UEOSVoice_Statics::NewProp_m_sUserIndex = { "m_sUserIndex", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSVoice, m_sUserIndex), METADATA_PARAMS(Z_Construct_UClass_UEOSVoice_Statics::NewProp_m_sUserIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSVoice_Statics::NewProp_m_sUserIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEOSVoice_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSVoice_Statics::NewProp_VoiceEventDispatcher,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSVoice_Statics::NewProp_m_strServiceUserId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSVoice_Statics::NewProp_m_strInputDeviceId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSVoice_Statics::NewProp_m_strOutputDeviceId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSVoice_Statics::NewProp_m_fInputVolume,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSVoice_Statics::NewProp_m_fOutputVolume,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSVoice_Statics::NewProp_m_sUserIndex,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEOSVoice_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEOSVoice>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEOSVoice_Statics::ClassParams = {
		&UEOSVoice::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UEOSVoice_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UEOSVoice_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEOSVoice_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSVoice_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEOSVoice()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEOSVoice_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEOSVoice, 1802133);
	template<> YEOSSDK_API UClass* StaticClass<UEOSVoice>()
	{
		return UEOSVoice::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEOSVoice(Z_Construct_UClass_UEOSVoice, &UEOSVoice::StaticClass, TEXT("/Script/yEOSSDK"), TEXT("UEOSVoice"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEOSVoice);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
