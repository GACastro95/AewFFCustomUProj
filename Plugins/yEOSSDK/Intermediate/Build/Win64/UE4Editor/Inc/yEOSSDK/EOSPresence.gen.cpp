// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yEOSSDK/Public/EOSPresence.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOSPresence() {}
// Cross Module References
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSPresence_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSPresence();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSPresenceBase();
	UPackage* Z_Construct_UPackage__Script_yEOSSDK();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSCommunityInfoBase_NoRegister();
	YEOSSDK_API UEnum* Z_Construct_UEnum_yEOSSDK_EEOSPresenceStatus();
	YEOSSDK_API UFunction* Z_Construct_UDelegateFunction_yEOSSDK_EOSPresenceJoinGameEventDispatcher__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UEOSPresence::execRequestDeleteData)
	{
		P_GET_TARRAY(FString,Z_Param__cArrayData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RequestDeleteData(Z_Param__cArrayData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSPresence::execRequestSetData)
	{
		P_GET_TMAP(FString,FString,Z_Param__cMapData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RequestSetData(Z_Param__cMapData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSPresence::execRequestSetPresence)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__strRichText);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RequestSetPresence(Z_Param__strRichText);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSPresence::execRequestSetSession)
	{
		P_GET_OBJECT(UEOSCommunityInfoBase,Z_Param__pcCommunityInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RequestSetSession(Z_Param__pcCommunityInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSPresence::execRequestSetStatus)
	{
		P_GET_ENUM(EEOSPresenceStatus,Z_Param__enStatus);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RequestSetStatus(EEOSPresenceStatus(Z_Param__enStatus));
		P_NATIVE_END;
	}
	void UEOSPresence::StaticRegisterNativesUEOSPresence()
	{
		UClass* Class = UEOSPresence::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "RequestDeleteData", &UEOSPresence::execRequestDeleteData },
			{ "RequestSetData", &UEOSPresence::execRequestSetData },
			{ "RequestSetPresence", &UEOSPresence::execRequestSetPresence },
			{ "RequestSetSession", &UEOSPresence::execRequestSetSession },
			{ "RequestSetStatus", &UEOSPresence::execRequestSetStatus },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEOSPresence_RequestDeleteData_Statics
	{
		struct EOSPresence_eventRequestDeleteData_Parms
		{
			TArray<FString> _cArrayData;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__cArrayData_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__cArrayData;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSPresence_RequestDeleteData_Statics::NewProp__cArrayData_Inner = { "_cArrayData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEOSPresence_RequestDeleteData_Statics::NewProp__cArrayData = { "_cArrayData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSPresence_eventRequestDeleteData_Parms, _cArrayData), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSPresence_RequestDeleteData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSPresence_eventRequestDeleteData_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSPresence_RequestDeleteData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSPresence_eventRequestDeleteData_Parms), &Z_Construct_UFunction_UEOSPresence_RequestDeleteData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSPresence_RequestDeleteData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSPresence_RequestDeleteData_Statics::NewProp__cArrayData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSPresence_RequestDeleteData_Statics::NewProp__cArrayData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSPresence_RequestDeleteData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSPresence_RequestDeleteData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSPresence.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSPresence_RequestDeleteData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSPresence, nullptr, "RequestDeleteData", nullptr, nullptr, sizeof(EOSPresence_eventRequestDeleteData_Parms), Z_Construct_UFunction_UEOSPresence_RequestDeleteData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSPresence_RequestDeleteData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSPresence_RequestDeleteData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSPresence_RequestDeleteData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSPresence_RequestDeleteData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSPresence_RequestDeleteData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSPresence_RequestSetData_Statics
	{
		struct EOSPresence_eventRequestSetData_Parms
		{
			TMap<FString,FString> _cMapData;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__cMapData_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__cMapData_Key_KeyProp;
		static const UE4CodeGen_Private::FMapPropertyParams NewProp__cMapData;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSPresence_RequestSetData_Statics::NewProp__cMapData_ValueProp = { "_cMapData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSPresence_RequestSetData_Statics::NewProp__cMapData_Key_KeyProp = { "_cMapData_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UEOSPresence_RequestSetData_Statics::NewProp__cMapData = { "_cMapData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSPresence_eventRequestSetData_Parms, _cMapData), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSPresence_RequestSetData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSPresence_eventRequestSetData_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSPresence_RequestSetData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSPresence_eventRequestSetData_Parms), &Z_Construct_UFunction_UEOSPresence_RequestSetData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSPresence_RequestSetData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSPresence_RequestSetData_Statics::NewProp__cMapData_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSPresence_RequestSetData_Statics::NewProp__cMapData_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSPresence_RequestSetData_Statics::NewProp__cMapData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSPresence_RequestSetData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSPresence_RequestSetData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSPresence.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSPresence_RequestSetData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSPresence, nullptr, "RequestSetData", nullptr, nullptr, sizeof(EOSPresence_eventRequestSetData_Parms), Z_Construct_UFunction_UEOSPresence_RequestSetData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSPresence_RequestSetData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSPresence_RequestSetData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSPresence_RequestSetData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSPresence_RequestSetData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSPresence_RequestSetData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSPresence_RequestSetPresence_Statics
	{
		struct EOSPresence_eventRequestSetPresence_Parms
		{
			FString _strRichText;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strRichText_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strRichText;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSPresence_RequestSetPresence_Statics::NewProp__strRichText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSPresence_RequestSetPresence_Statics::NewProp__strRichText = { "_strRichText", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSPresence_eventRequestSetPresence_Parms, _strRichText), METADATA_PARAMS(Z_Construct_UFunction_UEOSPresence_RequestSetPresence_Statics::NewProp__strRichText_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSPresence_RequestSetPresence_Statics::NewProp__strRichText_MetaData)) };
	void Z_Construct_UFunction_UEOSPresence_RequestSetPresence_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSPresence_eventRequestSetPresence_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSPresence_RequestSetPresence_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSPresence_eventRequestSetPresence_Parms), &Z_Construct_UFunction_UEOSPresence_RequestSetPresence_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSPresence_RequestSetPresence_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSPresence_RequestSetPresence_Statics::NewProp__strRichText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSPresence_RequestSetPresence_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSPresence_RequestSetPresence_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSPresence.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSPresence_RequestSetPresence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSPresence, nullptr, "RequestSetPresence", nullptr, nullptr, sizeof(EOSPresence_eventRequestSetPresence_Parms), Z_Construct_UFunction_UEOSPresence_RequestSetPresence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSPresence_RequestSetPresence_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSPresence_RequestSetPresence_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSPresence_RequestSetPresence_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSPresence_RequestSetPresence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSPresence_RequestSetPresence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSPresence_RequestSetSession_Statics
	{
		struct EOSPresence_eventRequestSetSession_Parms
		{
			UEOSCommunityInfoBase* _pcCommunityInfo;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcCommunityInfo;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSPresence_RequestSetSession_Statics::NewProp__pcCommunityInfo = { "_pcCommunityInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSPresence_eventRequestSetSession_Parms, _pcCommunityInfo), Z_Construct_UClass_UEOSCommunityInfoBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSPresence_RequestSetSession_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSPresence_eventRequestSetSession_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSPresence_RequestSetSession_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSPresence_eventRequestSetSession_Parms), &Z_Construct_UFunction_UEOSPresence_RequestSetSession_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSPresence_RequestSetSession_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSPresence_RequestSetSession_Statics::NewProp__pcCommunityInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSPresence_RequestSetSession_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSPresence_RequestSetSession_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSPresence.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSPresence_RequestSetSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSPresence, nullptr, "RequestSetSession", nullptr, nullptr, sizeof(EOSPresence_eventRequestSetSession_Parms), Z_Construct_UFunction_UEOSPresence_RequestSetSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSPresence_RequestSetSession_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSPresence_RequestSetSession_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSPresence_RequestSetSession_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSPresence_RequestSetSession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSPresence_RequestSetSession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSPresence_RequestSetStatus_Statics
	{
		struct EOSPresence_eventRequestSetStatus_Parms
		{
			EEOSPresenceStatus _enStatus;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__enStatus_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__enStatus;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEOSPresence_RequestSetStatus_Statics::NewProp__enStatus_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEOSPresence_RequestSetStatus_Statics::NewProp__enStatus = { "_enStatus", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSPresence_eventRequestSetStatus_Parms, _enStatus), Z_Construct_UEnum_yEOSSDK_EEOSPresenceStatus, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSPresence_RequestSetStatus_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSPresence_eventRequestSetStatus_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSPresence_RequestSetStatus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSPresence_eventRequestSetStatus_Parms), &Z_Construct_UFunction_UEOSPresence_RequestSetStatus_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSPresence_RequestSetStatus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSPresence_RequestSetStatus_Statics::NewProp__enStatus_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSPresence_RequestSetStatus_Statics::NewProp__enStatus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSPresence_RequestSetStatus_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSPresence_RequestSetStatus_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSPresence.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSPresence_RequestSetStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSPresence, nullptr, "RequestSetStatus", nullptr, nullptr, sizeof(EOSPresence_eventRequestSetStatus_Parms), Z_Construct_UFunction_UEOSPresence_RequestSetStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSPresence_RequestSetStatus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSPresence_RequestSetStatus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSPresence_RequestSetStatus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSPresence_RequestSetStatus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSPresence_RequestSetStatus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEOSPresence_NoRegister()
	{
		return UEOSPresence::StaticClass();
	}
	struct Z_Construct_UClass_UEOSPresence_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PresenceJoinGameEventDispatcher_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_PresenceJoinGameEventDispatcher;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEOSPresence_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEOSPresenceBase,
		(UObject* (*)())Z_Construct_UPackage__Script_yEOSSDK,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEOSPresence_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEOSPresence_RequestDeleteData, "RequestDeleteData" }, // 3514924534
		{ &Z_Construct_UFunction_UEOSPresence_RequestSetData, "RequestSetData" }, // 104912974
		{ &Z_Construct_UFunction_UEOSPresence_RequestSetPresence, "RequestSetPresence" }, // 1969221207
		{ &Z_Construct_UFunction_UEOSPresence_RequestSetSession, "RequestSetSession" }, // 3357537879
		{ &Z_Construct_UFunction_UEOSPresence_RequestSetStatus, "RequestSetStatus" }, // 4139099697
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSPresence_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "EOSPresence.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/EOSPresence.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSPresence_Statics::NewProp_PresenceJoinGameEventDispatcher_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSPresence" },
		{ "ModuleRelativePath", "Public/EOSPresence.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEOSPresence_Statics::NewProp_PresenceJoinGameEventDispatcher = { "PresenceJoinGameEventDispatcher", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSPresence, PresenceJoinGameEventDispatcher), Z_Construct_UDelegateFunction_yEOSSDK_EOSPresenceJoinGameEventDispatcher__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UEOSPresence_Statics::NewProp_PresenceJoinGameEventDispatcher_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSPresence_Statics::NewProp_PresenceJoinGameEventDispatcher_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEOSPresence_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSPresence_Statics::NewProp_PresenceJoinGameEventDispatcher,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEOSPresence_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEOSPresence>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEOSPresence_Statics::ClassParams = {
		&UEOSPresence::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UEOSPresence_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UEOSPresence_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEOSPresence_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSPresence_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEOSPresence()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEOSPresence_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEOSPresence, 1556845761);
	template<> YEOSSDK_API UClass* StaticClass<UEOSPresence>()
	{
		return UEOSPresence::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEOSPresence(Z_Construct_UClass_UEOSPresence, &UEOSPresence::StaticClass, TEXT("/Script/yEOSSDK"), TEXT("UEOSPresence"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEOSPresence);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
