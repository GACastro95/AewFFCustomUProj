// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yEOSSDK/Public/EOSNatP2PStringPacket.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOSNatP2PStringPacket() {}
// Cross Module References
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSNatP2PStringPacket_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSNatP2PStringPacket();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSNatP2PPacketBase();
	UPackage* Z_Construct_UPackage__Script_yEOSSDK();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSNatP2PCachedTransfer_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSUserBase_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSNatP2PBinary_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UEOSNatP2PStringPacket::execCreateStringPacket)
	{
		P_GET_OBJECT_REF(UEOSNatP2PStringPacket,Z_Param_Out__pcStringPacket);
		P_GET_PROPERTY(FStrProperty,Z_Param__strText);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UEOSNatP2PStringPacket::CreateStringPacket(Z_Param_Out__pcStringPacket,Z_Param__strText);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSNatP2PStringPacket::execCreateStringPacketWithNatP2PCachedTransfer)
	{
		P_GET_OBJECT_REF(UEOSNatP2PStringPacket,Z_Param_Out__pcStringPacket);
		P_GET_OBJECT(UEOSNatP2PCachedTransfer,Z_Param__pcCachedTransfer);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UEOSNatP2PStringPacket::CreateStringPacketWithNatP2PCachedTransfer(Z_Param_Out__pcStringPacket,Z_Param__pcCachedTransfer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSNatP2PStringPacket::execCreateStringPacketWithUserAndNatP2PCachedTransfer)
	{
		P_GET_OBJECT_REF(UEOSNatP2PStringPacket,Z_Param_Out__pcStringPacket);
		P_GET_OBJECT(UEOSUserBase,Z_Param__pcUserBase);
		P_GET_OBJECT(UEOSNatP2PCachedTransfer,Z_Param__pcCachedTransfer);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UEOSNatP2PStringPacket::CreateStringPacketWithUserAndNatP2PCachedTransfer(Z_Param_Out__pcStringPacket,Z_Param__pcUserBase,Z_Param__pcCachedTransfer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSNatP2PStringPacket::execGetStringFromP2PBinary)
	{
		P_GET_OBJECT(UEOSNatP2PBinary,Z_Param__pcBinary);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UEOSNatP2PStringPacket::GetStringFromP2PBinary(Z_Param__pcBinary);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSNatP2PStringPacket::execSetString)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__strText);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetString(Z_Param__strText);
		P_NATIVE_END;
	}
	void UEOSNatP2PStringPacket::StaticRegisterNativesUEOSNatP2PStringPacket()
	{
		UClass* Class = UEOSNatP2PStringPacket::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateStringPacket", &UEOSNatP2PStringPacket::execCreateStringPacket },
			{ "CreateStringPacketWithNatP2PCachedTransfer", &UEOSNatP2PStringPacket::execCreateStringPacketWithNatP2PCachedTransfer },
			{ "CreateStringPacketWithUserAndNatP2PCachedTransfer", &UEOSNatP2PStringPacket::execCreateStringPacketWithUserAndNatP2PCachedTransfer },
			{ "GetStringFromP2PBinary", &UEOSNatP2PStringPacket::execGetStringFromP2PBinary },
			{ "SetString", &UEOSNatP2PStringPacket::execSetString },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEOSNatP2PStringPacket_CreateStringPacket_Statics
	{
		struct EOSNatP2PStringPacket_eventCreateStringPacket_Parms
		{
			UEOSNatP2PStringPacket* _pcStringPacket;
			FString _strText;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcStringPacket;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strText_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strText;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSNatP2PStringPacket_CreateStringPacket_Statics::NewProp__pcStringPacket = { "_pcStringPacket", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSNatP2PStringPacket_eventCreateStringPacket_Parms, _pcStringPacket), Z_Construct_UClass_UEOSNatP2PStringPacket_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSNatP2PStringPacket_CreateStringPacket_Statics::NewProp__strText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSNatP2PStringPacket_CreateStringPacket_Statics::NewProp__strText = { "_strText", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSNatP2PStringPacket_eventCreateStringPacket_Parms, _strText), METADATA_PARAMS(Z_Construct_UFunction_UEOSNatP2PStringPacket_CreateStringPacket_Statics::NewProp__strText_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSNatP2PStringPacket_CreateStringPacket_Statics::NewProp__strText_MetaData)) };
	void Z_Construct_UFunction_UEOSNatP2PStringPacket_CreateStringPacket_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSNatP2PStringPacket_eventCreateStringPacket_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSNatP2PStringPacket_CreateStringPacket_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSNatP2PStringPacket_eventCreateStringPacket_Parms), &Z_Construct_UFunction_UEOSNatP2PStringPacket_CreateStringPacket_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSNatP2PStringPacket_CreateStringPacket_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSNatP2PStringPacket_CreateStringPacket_Statics::NewProp__pcStringPacket,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSNatP2PStringPacket_CreateStringPacket_Statics::NewProp__strText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSNatP2PStringPacket_CreateStringPacket_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSNatP2PStringPacket_CreateStringPacket_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSNatP2PStringPacket.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSNatP2PStringPacket_CreateStringPacket_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSNatP2PStringPacket, nullptr, "CreateStringPacket", nullptr, nullptr, sizeof(EOSNatP2PStringPacket_eventCreateStringPacket_Parms), Z_Construct_UFunction_UEOSNatP2PStringPacket_CreateStringPacket_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSNatP2PStringPacket_CreateStringPacket_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSNatP2PStringPacket_CreateStringPacket_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSNatP2PStringPacket_CreateStringPacket_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSNatP2PStringPacket_CreateStringPacket()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSNatP2PStringPacket_CreateStringPacket_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSNatP2PStringPacket_CreateStringPacketWithNatP2PCachedTransfer_Statics
	{
		struct EOSNatP2PStringPacket_eventCreateStringPacketWithNatP2PCachedTransfer_Parms
		{
			UEOSNatP2PStringPacket* _pcStringPacket;
			UEOSNatP2PCachedTransfer* _pcCachedTransfer;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcStringPacket;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcCachedTransfer;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSNatP2PStringPacket_CreateStringPacketWithNatP2PCachedTransfer_Statics::NewProp__pcStringPacket = { "_pcStringPacket", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSNatP2PStringPacket_eventCreateStringPacketWithNatP2PCachedTransfer_Parms, _pcStringPacket), Z_Construct_UClass_UEOSNatP2PStringPacket_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSNatP2PStringPacket_CreateStringPacketWithNatP2PCachedTransfer_Statics::NewProp__pcCachedTransfer = { "_pcCachedTransfer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSNatP2PStringPacket_eventCreateStringPacketWithNatP2PCachedTransfer_Parms, _pcCachedTransfer), Z_Construct_UClass_UEOSNatP2PCachedTransfer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSNatP2PStringPacket_CreateStringPacketWithNatP2PCachedTransfer_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSNatP2PStringPacket_eventCreateStringPacketWithNatP2PCachedTransfer_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSNatP2PStringPacket_CreateStringPacketWithNatP2PCachedTransfer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSNatP2PStringPacket_eventCreateStringPacketWithNatP2PCachedTransfer_Parms), &Z_Construct_UFunction_UEOSNatP2PStringPacket_CreateStringPacketWithNatP2PCachedTransfer_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSNatP2PStringPacket_CreateStringPacketWithNatP2PCachedTransfer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSNatP2PStringPacket_CreateStringPacketWithNatP2PCachedTransfer_Statics::NewProp__pcStringPacket,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSNatP2PStringPacket_CreateStringPacketWithNatP2PCachedTransfer_Statics::NewProp__pcCachedTransfer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSNatP2PStringPacket_CreateStringPacketWithNatP2PCachedTransfer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSNatP2PStringPacket_CreateStringPacketWithNatP2PCachedTransfer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSNatP2PStringPacket.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSNatP2PStringPacket_CreateStringPacketWithNatP2PCachedTransfer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSNatP2PStringPacket, nullptr, "CreateStringPacketWithNatP2PCachedTransfer", nullptr, nullptr, sizeof(EOSNatP2PStringPacket_eventCreateStringPacketWithNatP2PCachedTransfer_Parms), Z_Construct_UFunction_UEOSNatP2PStringPacket_CreateStringPacketWithNatP2PCachedTransfer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSNatP2PStringPacket_CreateStringPacketWithNatP2PCachedTransfer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSNatP2PStringPacket_CreateStringPacketWithNatP2PCachedTransfer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSNatP2PStringPacket_CreateStringPacketWithNatP2PCachedTransfer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSNatP2PStringPacket_CreateStringPacketWithNatP2PCachedTransfer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSNatP2PStringPacket_CreateStringPacketWithNatP2PCachedTransfer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSNatP2PStringPacket_CreateStringPacketWithUserAndNatP2PCachedTransfer_Statics
	{
		struct EOSNatP2PStringPacket_eventCreateStringPacketWithUserAndNatP2PCachedTransfer_Parms
		{
			UEOSNatP2PStringPacket* _pcStringPacket;
			UEOSUserBase* _pcUserBase;
			UEOSNatP2PCachedTransfer* _pcCachedTransfer;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcStringPacket;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcUserBase;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcCachedTransfer;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSNatP2PStringPacket_CreateStringPacketWithUserAndNatP2PCachedTransfer_Statics::NewProp__pcStringPacket = { "_pcStringPacket", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSNatP2PStringPacket_eventCreateStringPacketWithUserAndNatP2PCachedTransfer_Parms, _pcStringPacket), Z_Construct_UClass_UEOSNatP2PStringPacket_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSNatP2PStringPacket_CreateStringPacketWithUserAndNatP2PCachedTransfer_Statics::NewProp__pcUserBase = { "_pcUserBase", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSNatP2PStringPacket_eventCreateStringPacketWithUserAndNatP2PCachedTransfer_Parms, _pcUserBase), Z_Construct_UClass_UEOSUserBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSNatP2PStringPacket_CreateStringPacketWithUserAndNatP2PCachedTransfer_Statics::NewProp__pcCachedTransfer = { "_pcCachedTransfer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSNatP2PStringPacket_eventCreateStringPacketWithUserAndNatP2PCachedTransfer_Parms, _pcCachedTransfer), Z_Construct_UClass_UEOSNatP2PCachedTransfer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSNatP2PStringPacket_CreateStringPacketWithUserAndNatP2PCachedTransfer_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSNatP2PStringPacket_eventCreateStringPacketWithUserAndNatP2PCachedTransfer_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSNatP2PStringPacket_CreateStringPacketWithUserAndNatP2PCachedTransfer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSNatP2PStringPacket_eventCreateStringPacketWithUserAndNatP2PCachedTransfer_Parms), &Z_Construct_UFunction_UEOSNatP2PStringPacket_CreateStringPacketWithUserAndNatP2PCachedTransfer_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSNatP2PStringPacket_CreateStringPacketWithUserAndNatP2PCachedTransfer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSNatP2PStringPacket_CreateStringPacketWithUserAndNatP2PCachedTransfer_Statics::NewProp__pcStringPacket,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSNatP2PStringPacket_CreateStringPacketWithUserAndNatP2PCachedTransfer_Statics::NewProp__pcUserBase,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSNatP2PStringPacket_CreateStringPacketWithUserAndNatP2PCachedTransfer_Statics::NewProp__pcCachedTransfer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSNatP2PStringPacket_CreateStringPacketWithUserAndNatP2PCachedTransfer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSNatP2PStringPacket_CreateStringPacketWithUserAndNatP2PCachedTransfer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSNatP2PStringPacket.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSNatP2PStringPacket_CreateStringPacketWithUserAndNatP2PCachedTransfer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSNatP2PStringPacket, nullptr, "CreateStringPacketWithUserAndNatP2PCachedTransfer", nullptr, nullptr, sizeof(EOSNatP2PStringPacket_eventCreateStringPacketWithUserAndNatP2PCachedTransfer_Parms), Z_Construct_UFunction_UEOSNatP2PStringPacket_CreateStringPacketWithUserAndNatP2PCachedTransfer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSNatP2PStringPacket_CreateStringPacketWithUserAndNatP2PCachedTransfer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSNatP2PStringPacket_CreateStringPacketWithUserAndNatP2PCachedTransfer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSNatP2PStringPacket_CreateStringPacketWithUserAndNatP2PCachedTransfer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSNatP2PStringPacket_CreateStringPacketWithUserAndNatP2PCachedTransfer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSNatP2PStringPacket_CreateStringPacketWithUserAndNatP2PCachedTransfer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSNatP2PStringPacket_GetStringFromP2PBinary_Statics
	{
		struct EOSNatP2PStringPacket_eventGetStringFromP2PBinary_Parms
		{
			UEOSNatP2PBinary* _pcBinary;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcBinary;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSNatP2PStringPacket_GetStringFromP2PBinary_Statics::NewProp__pcBinary = { "_pcBinary", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSNatP2PStringPacket_eventGetStringFromP2PBinary_Parms, _pcBinary), Z_Construct_UClass_UEOSNatP2PBinary_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSNatP2PStringPacket_GetStringFromP2PBinary_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSNatP2PStringPacket_eventGetStringFromP2PBinary_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSNatP2PStringPacket_GetStringFromP2PBinary_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSNatP2PStringPacket_GetStringFromP2PBinary_Statics::NewProp__pcBinary,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSNatP2PStringPacket_GetStringFromP2PBinary_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSNatP2PStringPacket_GetStringFromP2PBinary_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSNatP2PStringPacket.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSNatP2PStringPacket_GetStringFromP2PBinary_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSNatP2PStringPacket, nullptr, "GetStringFromP2PBinary", nullptr, nullptr, sizeof(EOSNatP2PStringPacket_eventGetStringFromP2PBinary_Parms), Z_Construct_UFunction_UEOSNatP2PStringPacket_GetStringFromP2PBinary_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSNatP2PStringPacket_GetStringFromP2PBinary_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSNatP2PStringPacket_GetStringFromP2PBinary_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSNatP2PStringPacket_GetStringFromP2PBinary_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSNatP2PStringPacket_GetStringFromP2PBinary()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSNatP2PStringPacket_GetStringFromP2PBinary_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSNatP2PStringPacket_SetString_Statics
	{
		struct EOSNatP2PStringPacket_eventSetString_Parms
		{
			FString _strText;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strText_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strText;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSNatP2PStringPacket_SetString_Statics::NewProp__strText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSNatP2PStringPacket_SetString_Statics::NewProp__strText = { "_strText", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSNatP2PStringPacket_eventSetString_Parms, _strText), METADATA_PARAMS(Z_Construct_UFunction_UEOSNatP2PStringPacket_SetString_Statics::NewProp__strText_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSNatP2PStringPacket_SetString_Statics::NewProp__strText_MetaData)) };
	void Z_Construct_UFunction_UEOSNatP2PStringPacket_SetString_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSNatP2PStringPacket_eventSetString_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSNatP2PStringPacket_SetString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSNatP2PStringPacket_eventSetString_Parms), &Z_Construct_UFunction_UEOSNatP2PStringPacket_SetString_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSNatP2PStringPacket_SetString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSNatP2PStringPacket_SetString_Statics::NewProp__strText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSNatP2PStringPacket_SetString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSNatP2PStringPacket_SetString_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSNatP2PStringPacket.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSNatP2PStringPacket_SetString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSNatP2PStringPacket, nullptr, "SetString", nullptr, nullptr, sizeof(EOSNatP2PStringPacket_eventSetString_Parms), Z_Construct_UFunction_UEOSNatP2PStringPacket_SetString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSNatP2PStringPacket_SetString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSNatP2PStringPacket_SetString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSNatP2PStringPacket_SetString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSNatP2PStringPacket_SetString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSNatP2PStringPacket_SetString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEOSNatP2PStringPacket_NoRegister()
	{
		return UEOSNatP2PStringPacket::StaticClass();
	}
	struct Z_Construct_UClass_UEOSNatP2PStringPacket_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEOSNatP2PStringPacket_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEOSNatP2PPacketBase,
		(UObject* (*)())Z_Construct_UPackage__Script_yEOSSDK,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEOSNatP2PStringPacket_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEOSNatP2PStringPacket_CreateStringPacket, "CreateStringPacket" }, // 3603246762
		{ &Z_Construct_UFunction_UEOSNatP2PStringPacket_CreateStringPacketWithNatP2PCachedTransfer, "CreateStringPacketWithNatP2PCachedTransfer" }, // 2351274149
		{ &Z_Construct_UFunction_UEOSNatP2PStringPacket_CreateStringPacketWithUserAndNatP2PCachedTransfer, "CreateStringPacketWithUserAndNatP2PCachedTransfer" }, // 680717684
		{ &Z_Construct_UFunction_UEOSNatP2PStringPacket_GetStringFromP2PBinary, "GetStringFromP2PBinary" }, // 1968071652
		{ &Z_Construct_UFunction_UEOSNatP2PStringPacket_SetString, "SetString" }, // 1048996648
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSNatP2PStringPacket_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "EOSNatP2PStringPacket.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/EOSNatP2PStringPacket.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEOSNatP2PStringPacket_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEOSNatP2PStringPacket>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEOSNatP2PStringPacket_Statics::ClassParams = {
		&UEOSNatP2PStringPacket::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UEOSNatP2PStringPacket_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSNatP2PStringPacket_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEOSNatP2PStringPacket()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEOSNatP2PStringPacket_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEOSNatP2PStringPacket, 1187807635);
	template<> YEOSSDK_API UClass* StaticClass<UEOSNatP2PStringPacket>()
	{
		return UEOSNatP2PStringPacket::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEOSNatP2PStringPacket(Z_Construct_UClass_UEOSNatP2PStringPacket, &UEOSNatP2PStringPacket::StaticClass, TEXT("/Script/yEOSSDK"), TEXT("UEOSNatP2PStringPacket"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEOSNatP2PStringPacket);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
