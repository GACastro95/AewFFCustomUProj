// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yEOSSDK/Public/EOSSessionP2PLatencyInfoPacket.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOSSessionP2PLatencyInfoPacket() {}
// Cross Module References
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSSessionP2PLatencyInfoPacket_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSSessionP2PLatencyInfoPacket();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSSessionP2PSynchronizedPacketBase();
	UPackage* Z_Construct_UPackage__Script_yEOSSDK();
	YEOSSDK_API UScriptStruct* Z_Construct_UScriptStruct_FEOSSessionP2PLatencyInfoData();
// End Cross Module References
	DEFINE_FUNCTION(UEOSSessionP2PLatencyInfoPacket::execAddLatencyInfo)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__strProductUserID);
		P_GET_PROPERTY(FFloatProperty,Z_Param__fAverage);
		P_GET_PROPERTY(FFloatProperty,Z_Param__fMin);
		P_GET_PROPERTY(FFloatProperty,Z_Param__fMax);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddLatencyInfo(Z_Param__strProductUserID,Z_Param__fAverage,Z_Param__fMin,Z_Param__fMax);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSessionP2PLatencyInfoPacket::execGetHostPriority)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__strProductUserID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetHostPriority(Z_Param__strProductUserID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSessionP2PLatencyInfoPacket::execGetLatencyInfo)
	{
		P_GET_STRUCT_REF(FEOSSessionP2PLatencyInfoData,Z_Param_Out__rstInfoData);
		P_GET_PROPERTY(FIntProperty,Z_Param__sIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetLatencyInfo(Z_Param_Out__rstInfoData,Z_Param__sIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSessionP2PLatencyInfoPacket::execGetTotalLatencyInfoNum)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetTotalLatencyInfoNum();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSessionP2PLatencyInfoPacket::execMergeLatencyInfo)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__strProductUserID);
		P_GET_PROPERTY(FFloatProperty,Z_Param__fAverage);
		P_GET_PROPERTY(FFloatProperty,Z_Param__fMin);
		P_GET_PROPERTY(FFloatProperty,Z_Param__fMax);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MergeLatencyInfo(Z_Param__strProductUserID,Z_Param__fAverage,Z_Param__fMin,Z_Param__fMax);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSessionP2PLatencyInfoPacket::execReset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Reset();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSessionP2PLatencyInfoPacket::execSend)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__uPacketIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Send(Z_Param__uPacketIndex);
		P_NATIVE_END;
	}
	void UEOSSessionP2PLatencyInfoPacket::StaticRegisterNativesUEOSSessionP2PLatencyInfoPacket()
	{
		UClass* Class = UEOSSessionP2PLatencyInfoPacket::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddLatencyInfo", &UEOSSessionP2PLatencyInfoPacket::execAddLatencyInfo },
			{ "GetHostPriority", &UEOSSessionP2PLatencyInfoPacket::execGetHostPriority },
			{ "GetLatencyInfo", &UEOSSessionP2PLatencyInfoPacket::execGetLatencyInfo },
			{ "GetTotalLatencyInfoNum", &UEOSSessionP2PLatencyInfoPacket::execGetTotalLatencyInfoNum },
			{ "MergeLatencyInfo", &UEOSSessionP2PLatencyInfoPacket::execMergeLatencyInfo },
			{ "Reset", &UEOSSessionP2PLatencyInfoPacket::execReset },
			{ "Send", &UEOSSessionP2PLatencyInfoPacket::execSend },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEOSSessionP2PLatencyInfoPacket_AddLatencyInfo_Statics
	{
		struct EOSSessionP2PLatencyInfoPacket_eventAddLatencyInfo_Parms
		{
			FString _strProductUserID;
			float _fAverage;
			float _fMin;
			float _fMax;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strProductUserID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strProductUserID;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__fAverage;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__fMin;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__fMax;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2PLatencyInfoPacket_AddLatencyInfo_Statics::NewProp__strProductUserID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSSessionP2PLatencyInfoPacket_AddLatencyInfo_Statics::NewProp__strProductUserID = { "_strProductUserID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2PLatencyInfoPacket_eventAddLatencyInfo_Parms, _strProductUserID), METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2PLatencyInfoPacket_AddLatencyInfo_Statics::NewProp__strProductUserID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PLatencyInfoPacket_AddLatencyInfo_Statics::NewProp__strProductUserID_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UEOSSessionP2PLatencyInfoPacket_AddLatencyInfo_Statics::NewProp__fAverage = { "_fAverage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2PLatencyInfoPacket_eventAddLatencyInfo_Parms, _fAverage), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UEOSSessionP2PLatencyInfoPacket_AddLatencyInfo_Statics::NewProp__fMin = { "_fMin", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2PLatencyInfoPacket_eventAddLatencyInfo_Parms, _fMin), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UEOSSessionP2PLatencyInfoPacket_AddLatencyInfo_Statics::NewProp__fMax = { "_fMax", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2PLatencyInfoPacket_eventAddLatencyInfo_Parms, _fMax), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionP2PLatencyInfoPacket_AddLatencyInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PLatencyInfoPacket_AddLatencyInfo_Statics::NewProp__strProductUserID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PLatencyInfoPacket_AddLatencyInfo_Statics::NewProp__fAverage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PLatencyInfoPacket_AddLatencyInfo_Statics::NewProp__fMin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PLatencyInfoPacket_AddLatencyInfo_Statics::NewProp__fMax,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2PLatencyInfoPacket_AddLatencyInfo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2PLatencyInfoPacket.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2PLatencyInfoPacket_AddLatencyInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2PLatencyInfoPacket, nullptr, "AddLatencyInfo", nullptr, nullptr, sizeof(EOSSessionP2PLatencyInfoPacket_eventAddLatencyInfo_Parms), Z_Construct_UFunction_UEOSSessionP2PLatencyInfoPacket_AddLatencyInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PLatencyInfoPacket_AddLatencyInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2PLatencyInfoPacket_AddLatencyInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PLatencyInfoPacket_AddLatencyInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2PLatencyInfoPacket_AddLatencyInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2PLatencyInfoPacket_AddLatencyInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionP2PLatencyInfoPacket_GetHostPriority_Statics
	{
		struct EOSSessionP2PLatencyInfoPacket_eventGetHostPriority_Parms
		{
			FString _strProductUserID;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strProductUserID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strProductUserID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2PLatencyInfoPacket_GetHostPriority_Statics::NewProp__strProductUserID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSSessionP2PLatencyInfoPacket_GetHostPriority_Statics::NewProp__strProductUserID = { "_strProductUserID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2PLatencyInfoPacket_eventGetHostPriority_Parms, _strProductUserID), METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2PLatencyInfoPacket_GetHostPriority_Statics::NewProp__strProductUserID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PLatencyInfoPacket_GetHostPriority_Statics::NewProp__strProductUserID_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEOSSessionP2PLatencyInfoPacket_GetHostPriority_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2PLatencyInfoPacket_eventGetHostPriority_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionP2PLatencyInfoPacket_GetHostPriority_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PLatencyInfoPacket_GetHostPriority_Statics::NewProp__strProductUserID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PLatencyInfoPacket_GetHostPriority_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2PLatencyInfoPacket_GetHostPriority_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2PLatencyInfoPacket.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2PLatencyInfoPacket_GetHostPriority_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2PLatencyInfoPacket, nullptr, "GetHostPriority", nullptr, nullptr, sizeof(EOSSessionP2PLatencyInfoPacket_eventGetHostPriority_Parms), Z_Construct_UFunction_UEOSSessionP2PLatencyInfoPacket_GetHostPriority_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PLatencyInfoPacket_GetHostPriority_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2PLatencyInfoPacket_GetHostPriority_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PLatencyInfoPacket_GetHostPriority_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2PLatencyInfoPacket_GetHostPriority()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2PLatencyInfoPacket_GetHostPriority_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionP2PLatencyInfoPacket_GetLatencyInfo_Statics
	{
		struct EOSSessionP2PLatencyInfoPacket_eventGetLatencyInfo_Parms
		{
			FEOSSessionP2PLatencyInfoData _rstInfoData;
			int32 _sIndex;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__rstInfoData;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__sIndex;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEOSSessionP2PLatencyInfoPacket_GetLatencyInfo_Statics::NewProp__rstInfoData = { "_rstInfoData", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2PLatencyInfoPacket_eventGetLatencyInfo_Parms, _rstInfoData), Z_Construct_UScriptStruct_FEOSSessionP2PLatencyInfoData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEOSSessionP2PLatencyInfoPacket_GetLatencyInfo_Statics::NewProp__sIndex = { "_sIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2PLatencyInfoPacket_eventGetLatencyInfo_Parms, _sIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSSessionP2PLatencyInfoPacket_GetLatencyInfo_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSSessionP2PLatencyInfoPacket_eventGetLatencyInfo_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSSessionP2PLatencyInfoPacket_GetLatencyInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSSessionP2PLatencyInfoPacket_eventGetLatencyInfo_Parms), &Z_Construct_UFunction_UEOSSessionP2PLatencyInfoPacket_GetLatencyInfo_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionP2PLatencyInfoPacket_GetLatencyInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PLatencyInfoPacket_GetLatencyInfo_Statics::NewProp__rstInfoData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PLatencyInfoPacket_GetLatencyInfo_Statics::NewProp__sIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PLatencyInfoPacket_GetLatencyInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2PLatencyInfoPacket_GetLatencyInfo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2PLatencyInfoPacket.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2PLatencyInfoPacket_GetLatencyInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2PLatencyInfoPacket, nullptr, "GetLatencyInfo", nullptr, nullptr, sizeof(EOSSessionP2PLatencyInfoPacket_eventGetLatencyInfo_Parms), Z_Construct_UFunction_UEOSSessionP2PLatencyInfoPacket_GetLatencyInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PLatencyInfoPacket_GetLatencyInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2PLatencyInfoPacket_GetLatencyInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PLatencyInfoPacket_GetLatencyInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2PLatencyInfoPacket_GetLatencyInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2PLatencyInfoPacket_GetLatencyInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionP2PLatencyInfoPacket_GetTotalLatencyInfoNum_Statics
	{
		struct EOSSessionP2PLatencyInfoPacket_eventGetTotalLatencyInfoNum_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEOSSessionP2PLatencyInfoPacket_GetTotalLatencyInfoNum_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2PLatencyInfoPacket_eventGetTotalLatencyInfoNum_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionP2PLatencyInfoPacket_GetTotalLatencyInfoNum_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PLatencyInfoPacket_GetTotalLatencyInfoNum_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2PLatencyInfoPacket_GetTotalLatencyInfoNum_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2PLatencyInfoPacket.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2PLatencyInfoPacket_GetTotalLatencyInfoNum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2PLatencyInfoPacket, nullptr, "GetTotalLatencyInfoNum", nullptr, nullptr, sizeof(EOSSessionP2PLatencyInfoPacket_eventGetTotalLatencyInfoNum_Parms), Z_Construct_UFunction_UEOSSessionP2PLatencyInfoPacket_GetTotalLatencyInfoNum_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PLatencyInfoPacket_GetTotalLatencyInfoNum_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2PLatencyInfoPacket_GetTotalLatencyInfoNum_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PLatencyInfoPacket_GetTotalLatencyInfoNum_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2PLatencyInfoPacket_GetTotalLatencyInfoNum()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2PLatencyInfoPacket_GetTotalLatencyInfoNum_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionP2PLatencyInfoPacket_MergeLatencyInfo_Statics
	{
		struct EOSSessionP2PLatencyInfoPacket_eventMergeLatencyInfo_Parms
		{
			FString _strProductUserID;
			float _fAverage;
			float _fMin;
			float _fMax;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strProductUserID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strProductUserID;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__fAverage;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__fMin;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__fMax;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2PLatencyInfoPacket_MergeLatencyInfo_Statics::NewProp__strProductUserID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSSessionP2PLatencyInfoPacket_MergeLatencyInfo_Statics::NewProp__strProductUserID = { "_strProductUserID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2PLatencyInfoPacket_eventMergeLatencyInfo_Parms, _strProductUserID), METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2PLatencyInfoPacket_MergeLatencyInfo_Statics::NewProp__strProductUserID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PLatencyInfoPacket_MergeLatencyInfo_Statics::NewProp__strProductUserID_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UEOSSessionP2PLatencyInfoPacket_MergeLatencyInfo_Statics::NewProp__fAverage = { "_fAverage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2PLatencyInfoPacket_eventMergeLatencyInfo_Parms, _fAverage), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UEOSSessionP2PLatencyInfoPacket_MergeLatencyInfo_Statics::NewProp__fMin = { "_fMin", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2PLatencyInfoPacket_eventMergeLatencyInfo_Parms, _fMin), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UEOSSessionP2PLatencyInfoPacket_MergeLatencyInfo_Statics::NewProp__fMax = { "_fMax", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2PLatencyInfoPacket_eventMergeLatencyInfo_Parms, _fMax), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionP2PLatencyInfoPacket_MergeLatencyInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PLatencyInfoPacket_MergeLatencyInfo_Statics::NewProp__strProductUserID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PLatencyInfoPacket_MergeLatencyInfo_Statics::NewProp__fAverage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PLatencyInfoPacket_MergeLatencyInfo_Statics::NewProp__fMin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PLatencyInfoPacket_MergeLatencyInfo_Statics::NewProp__fMax,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2PLatencyInfoPacket_MergeLatencyInfo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2PLatencyInfoPacket.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2PLatencyInfoPacket_MergeLatencyInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2PLatencyInfoPacket, nullptr, "MergeLatencyInfo", nullptr, nullptr, sizeof(EOSSessionP2PLatencyInfoPacket_eventMergeLatencyInfo_Parms), Z_Construct_UFunction_UEOSSessionP2PLatencyInfoPacket_MergeLatencyInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PLatencyInfoPacket_MergeLatencyInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2PLatencyInfoPacket_MergeLatencyInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PLatencyInfoPacket_MergeLatencyInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2PLatencyInfoPacket_MergeLatencyInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2PLatencyInfoPacket_MergeLatencyInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionP2PLatencyInfoPacket_Reset_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2PLatencyInfoPacket_Reset_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2PLatencyInfoPacket.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2PLatencyInfoPacket_Reset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2PLatencyInfoPacket, nullptr, "Reset", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2PLatencyInfoPacket_Reset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PLatencyInfoPacket_Reset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2PLatencyInfoPacket_Reset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2PLatencyInfoPacket_Reset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionP2PLatencyInfoPacket_Send_Statics
	{
		struct EOSSessionP2PLatencyInfoPacket_eventSend_Parms
		{
			int32 _uPacketIndex;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__uPacketIndex;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEOSSessionP2PLatencyInfoPacket_Send_Statics::NewProp__uPacketIndex = { "_uPacketIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2PLatencyInfoPacket_eventSend_Parms, _uPacketIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSSessionP2PLatencyInfoPacket_Send_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSSessionP2PLatencyInfoPacket_eventSend_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSSessionP2PLatencyInfoPacket_Send_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSSessionP2PLatencyInfoPacket_eventSend_Parms), &Z_Construct_UFunction_UEOSSessionP2PLatencyInfoPacket_Send_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionP2PLatencyInfoPacket_Send_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PLatencyInfoPacket_Send_Statics::NewProp__uPacketIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PLatencyInfoPacket_Send_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2PLatencyInfoPacket_Send_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2PLatencyInfoPacket.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2PLatencyInfoPacket_Send_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2PLatencyInfoPacket, nullptr, "Send", nullptr, nullptr, sizeof(EOSSessionP2PLatencyInfoPacket_eventSend_Parms), Z_Construct_UFunction_UEOSSessionP2PLatencyInfoPacket_Send_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PLatencyInfoPacket_Send_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2PLatencyInfoPacket_Send_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PLatencyInfoPacket_Send_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2PLatencyInfoPacket_Send()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2PLatencyInfoPacket_Send_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEOSSessionP2PLatencyInfoPacket_NoRegister()
	{
		return UEOSSessionP2PLatencyInfoPacket::StaticClass();
	}
	struct Z_Construct_UClass_UEOSSessionP2PLatencyInfoPacket_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEOSSessionP2PLatencyInfoPacket_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEOSSessionP2PSynchronizedPacketBase,
		(UObject* (*)())Z_Construct_UPackage__Script_yEOSSDK,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEOSSessionP2PLatencyInfoPacket_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEOSSessionP2PLatencyInfoPacket_AddLatencyInfo, "AddLatencyInfo" }, // 222066222
		{ &Z_Construct_UFunction_UEOSSessionP2PLatencyInfoPacket_GetHostPriority, "GetHostPriority" }, // 1622043504
		{ &Z_Construct_UFunction_UEOSSessionP2PLatencyInfoPacket_GetLatencyInfo, "GetLatencyInfo" }, // 1212887116
		{ &Z_Construct_UFunction_UEOSSessionP2PLatencyInfoPacket_GetTotalLatencyInfoNum, "GetTotalLatencyInfoNum" }, // 4205314941
		{ &Z_Construct_UFunction_UEOSSessionP2PLatencyInfoPacket_MergeLatencyInfo, "MergeLatencyInfo" }, // 3483011076
		{ &Z_Construct_UFunction_UEOSSessionP2PLatencyInfoPacket_Reset, "Reset" }, // 3065706358
		{ &Z_Construct_UFunction_UEOSSessionP2PLatencyInfoPacket_Send, "Send" }, // 170446804
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSSessionP2PLatencyInfoPacket_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "EOSSessionP2PLatencyInfoPacket.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/EOSSessionP2PLatencyInfoPacket.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEOSSessionP2PLatencyInfoPacket_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEOSSessionP2PLatencyInfoPacket>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEOSSessionP2PLatencyInfoPacket_Statics::ClassParams = {
		&UEOSSessionP2PLatencyInfoPacket::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UEOSSessionP2PLatencyInfoPacket_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSSessionP2PLatencyInfoPacket_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEOSSessionP2PLatencyInfoPacket()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEOSSessionP2PLatencyInfoPacket_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEOSSessionP2PLatencyInfoPacket, 1961546852);
	template<> YEOSSDK_API UClass* StaticClass<UEOSSessionP2PLatencyInfoPacket>()
	{
		return UEOSSessionP2PLatencyInfoPacket::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEOSSessionP2PLatencyInfoPacket(Z_Construct_UClass_UEOSSessionP2PLatencyInfoPacket, &UEOSSessionP2PLatencyInfoPacket::StaticClass, TEXT("/Script/yEOSSDK"), TEXT("UEOSSessionP2PLatencyInfoPacket"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEOSSessionP2PLatencyInfoPacket);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
