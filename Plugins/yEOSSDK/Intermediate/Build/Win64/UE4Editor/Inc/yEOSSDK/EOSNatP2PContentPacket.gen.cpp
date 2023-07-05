// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yEOSSDK/Public/EOSNatP2PContentPacket.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOSNatP2PContentPacket() {}
// Cross Module References
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSNatP2PContentPacket_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSNatP2PContentPacket();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSNatP2PPacketBase();
	UPackage* Z_Construct_UPackage__Script_yEOSSDK();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSUserContentBinary_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSNatP2PCachedTransfer_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSUserBase_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSNatP2PBinary_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UEOSNatP2PContentPacket::execCreateContentPacket)
	{
		P_GET_OBJECT_REF(UEOSNatP2PContentPacket,Z_Param_Out__pcContentPacket);
		P_GET_OBJECT(UEOSUserContentBinary,Z_Param__pcContent);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UEOSNatP2PContentPacket::CreateContentPacket(Z_Param_Out__pcContentPacket,Z_Param__pcContent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSNatP2PContentPacket::execCreateContentPacketWithNatP2PCachedTransfer)
	{
		P_GET_OBJECT_REF(UEOSNatP2PContentPacket,Z_Param_Out__pcContentPacket);
		P_GET_OBJECT(UEOSNatP2PCachedTransfer,Z_Param__pcCachedTransfer);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UEOSNatP2PContentPacket::CreateContentPacketWithNatP2PCachedTransfer(Z_Param_Out__pcContentPacket,Z_Param__pcCachedTransfer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSNatP2PContentPacket::execCreateContentPacketWithUserAndNatP2PCachedTransfer)
	{
		P_GET_OBJECT_REF(UEOSNatP2PContentPacket,Z_Param_Out__pcContentPacket);
		P_GET_OBJECT(UEOSUserBase,Z_Param__pcUserBase);
		P_GET_OBJECT(UEOSNatP2PCachedTransfer,Z_Param__pcCachedTransfer);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UEOSNatP2PContentPacket::CreateContentPacketWithUserAndNatP2PCachedTransfer(Z_Param_Out__pcContentPacket,Z_Param__pcUserBase,Z_Param__pcCachedTransfer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSNatP2PContentPacket::execCreateUserContentBinary)
	{
		P_GET_OBJECT_REF(UEOSUserContentBinary,Z_Param_Out__pcContent);
		P_GET_OBJECT(UEOSNatP2PBinary,Z_Param__pcBinary);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UEOSNatP2PContentPacket::CreateUserContentBinary(Z_Param_Out__pcContent,Z_Param__pcBinary);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSNatP2PContentPacket::execSetContentBinary)
	{
		P_GET_OBJECT(UEOSUserContentBinary,Z_Param__pcContent);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetContentBinary(Z_Param__pcContent);
		P_NATIVE_END;
	}
	void UEOSNatP2PContentPacket::StaticRegisterNativesUEOSNatP2PContentPacket()
	{
		UClass* Class = UEOSNatP2PContentPacket::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateContentPacket", &UEOSNatP2PContentPacket::execCreateContentPacket },
			{ "CreateContentPacketWithNatP2PCachedTransfer", &UEOSNatP2PContentPacket::execCreateContentPacketWithNatP2PCachedTransfer },
			{ "CreateContentPacketWithUserAndNatP2PCachedTransfer", &UEOSNatP2PContentPacket::execCreateContentPacketWithUserAndNatP2PCachedTransfer },
			{ "CreateUserContentBinary", &UEOSNatP2PContentPacket::execCreateUserContentBinary },
			{ "SetContentBinary", &UEOSNatP2PContentPacket::execSetContentBinary },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEOSNatP2PContentPacket_CreateContentPacket_Statics
	{
		struct EOSNatP2PContentPacket_eventCreateContentPacket_Parms
		{
			UEOSNatP2PContentPacket* _pcContentPacket;
			UEOSUserContentBinary* _pcContent;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcContentPacket;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcContent;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSNatP2PContentPacket_CreateContentPacket_Statics::NewProp__pcContentPacket = { "_pcContentPacket", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSNatP2PContentPacket_eventCreateContentPacket_Parms, _pcContentPacket), Z_Construct_UClass_UEOSNatP2PContentPacket_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSNatP2PContentPacket_CreateContentPacket_Statics::NewProp__pcContent = { "_pcContent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSNatP2PContentPacket_eventCreateContentPacket_Parms, _pcContent), Z_Construct_UClass_UEOSUserContentBinary_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSNatP2PContentPacket_CreateContentPacket_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSNatP2PContentPacket_eventCreateContentPacket_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSNatP2PContentPacket_CreateContentPacket_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSNatP2PContentPacket_eventCreateContentPacket_Parms), &Z_Construct_UFunction_UEOSNatP2PContentPacket_CreateContentPacket_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSNatP2PContentPacket_CreateContentPacket_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSNatP2PContentPacket_CreateContentPacket_Statics::NewProp__pcContentPacket,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSNatP2PContentPacket_CreateContentPacket_Statics::NewProp__pcContent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSNatP2PContentPacket_CreateContentPacket_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSNatP2PContentPacket_CreateContentPacket_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSNatP2PContentPacket.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSNatP2PContentPacket_CreateContentPacket_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSNatP2PContentPacket, nullptr, "CreateContentPacket", nullptr, nullptr, sizeof(EOSNatP2PContentPacket_eventCreateContentPacket_Parms), Z_Construct_UFunction_UEOSNatP2PContentPacket_CreateContentPacket_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSNatP2PContentPacket_CreateContentPacket_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSNatP2PContentPacket_CreateContentPacket_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSNatP2PContentPacket_CreateContentPacket_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSNatP2PContentPacket_CreateContentPacket()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSNatP2PContentPacket_CreateContentPacket_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSNatP2PContentPacket_CreateContentPacketWithNatP2PCachedTransfer_Statics
	{
		struct EOSNatP2PContentPacket_eventCreateContentPacketWithNatP2PCachedTransfer_Parms
		{
			UEOSNatP2PContentPacket* _pcContentPacket;
			UEOSNatP2PCachedTransfer* _pcCachedTransfer;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcContentPacket;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcCachedTransfer;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSNatP2PContentPacket_CreateContentPacketWithNatP2PCachedTransfer_Statics::NewProp__pcContentPacket = { "_pcContentPacket", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSNatP2PContentPacket_eventCreateContentPacketWithNatP2PCachedTransfer_Parms, _pcContentPacket), Z_Construct_UClass_UEOSNatP2PContentPacket_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSNatP2PContentPacket_CreateContentPacketWithNatP2PCachedTransfer_Statics::NewProp__pcCachedTransfer = { "_pcCachedTransfer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSNatP2PContentPacket_eventCreateContentPacketWithNatP2PCachedTransfer_Parms, _pcCachedTransfer), Z_Construct_UClass_UEOSNatP2PCachedTransfer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSNatP2PContentPacket_CreateContentPacketWithNatP2PCachedTransfer_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSNatP2PContentPacket_eventCreateContentPacketWithNatP2PCachedTransfer_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSNatP2PContentPacket_CreateContentPacketWithNatP2PCachedTransfer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSNatP2PContentPacket_eventCreateContentPacketWithNatP2PCachedTransfer_Parms), &Z_Construct_UFunction_UEOSNatP2PContentPacket_CreateContentPacketWithNatP2PCachedTransfer_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSNatP2PContentPacket_CreateContentPacketWithNatP2PCachedTransfer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSNatP2PContentPacket_CreateContentPacketWithNatP2PCachedTransfer_Statics::NewProp__pcContentPacket,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSNatP2PContentPacket_CreateContentPacketWithNatP2PCachedTransfer_Statics::NewProp__pcCachedTransfer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSNatP2PContentPacket_CreateContentPacketWithNatP2PCachedTransfer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSNatP2PContentPacket_CreateContentPacketWithNatP2PCachedTransfer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSNatP2PContentPacket.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSNatP2PContentPacket_CreateContentPacketWithNatP2PCachedTransfer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSNatP2PContentPacket, nullptr, "CreateContentPacketWithNatP2PCachedTransfer", nullptr, nullptr, sizeof(EOSNatP2PContentPacket_eventCreateContentPacketWithNatP2PCachedTransfer_Parms), Z_Construct_UFunction_UEOSNatP2PContentPacket_CreateContentPacketWithNatP2PCachedTransfer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSNatP2PContentPacket_CreateContentPacketWithNatP2PCachedTransfer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSNatP2PContentPacket_CreateContentPacketWithNatP2PCachedTransfer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSNatP2PContentPacket_CreateContentPacketWithNatP2PCachedTransfer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSNatP2PContentPacket_CreateContentPacketWithNatP2PCachedTransfer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSNatP2PContentPacket_CreateContentPacketWithNatP2PCachedTransfer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSNatP2PContentPacket_CreateContentPacketWithUserAndNatP2PCachedTransfer_Statics
	{
		struct EOSNatP2PContentPacket_eventCreateContentPacketWithUserAndNatP2PCachedTransfer_Parms
		{
			UEOSNatP2PContentPacket* _pcContentPacket;
			UEOSUserBase* _pcUserBase;
			UEOSNatP2PCachedTransfer* _pcCachedTransfer;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcContentPacket;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSNatP2PContentPacket_CreateContentPacketWithUserAndNatP2PCachedTransfer_Statics::NewProp__pcContentPacket = { "_pcContentPacket", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSNatP2PContentPacket_eventCreateContentPacketWithUserAndNatP2PCachedTransfer_Parms, _pcContentPacket), Z_Construct_UClass_UEOSNatP2PContentPacket_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSNatP2PContentPacket_CreateContentPacketWithUserAndNatP2PCachedTransfer_Statics::NewProp__pcUserBase = { "_pcUserBase", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSNatP2PContentPacket_eventCreateContentPacketWithUserAndNatP2PCachedTransfer_Parms, _pcUserBase), Z_Construct_UClass_UEOSUserBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSNatP2PContentPacket_CreateContentPacketWithUserAndNatP2PCachedTransfer_Statics::NewProp__pcCachedTransfer = { "_pcCachedTransfer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSNatP2PContentPacket_eventCreateContentPacketWithUserAndNatP2PCachedTransfer_Parms, _pcCachedTransfer), Z_Construct_UClass_UEOSNatP2PCachedTransfer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSNatP2PContentPacket_CreateContentPacketWithUserAndNatP2PCachedTransfer_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSNatP2PContentPacket_eventCreateContentPacketWithUserAndNatP2PCachedTransfer_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSNatP2PContentPacket_CreateContentPacketWithUserAndNatP2PCachedTransfer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSNatP2PContentPacket_eventCreateContentPacketWithUserAndNatP2PCachedTransfer_Parms), &Z_Construct_UFunction_UEOSNatP2PContentPacket_CreateContentPacketWithUserAndNatP2PCachedTransfer_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSNatP2PContentPacket_CreateContentPacketWithUserAndNatP2PCachedTransfer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSNatP2PContentPacket_CreateContentPacketWithUserAndNatP2PCachedTransfer_Statics::NewProp__pcContentPacket,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSNatP2PContentPacket_CreateContentPacketWithUserAndNatP2PCachedTransfer_Statics::NewProp__pcUserBase,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSNatP2PContentPacket_CreateContentPacketWithUserAndNatP2PCachedTransfer_Statics::NewProp__pcCachedTransfer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSNatP2PContentPacket_CreateContentPacketWithUserAndNatP2PCachedTransfer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSNatP2PContentPacket_CreateContentPacketWithUserAndNatP2PCachedTransfer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSNatP2PContentPacket.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSNatP2PContentPacket_CreateContentPacketWithUserAndNatP2PCachedTransfer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSNatP2PContentPacket, nullptr, "CreateContentPacketWithUserAndNatP2PCachedTransfer", nullptr, nullptr, sizeof(EOSNatP2PContentPacket_eventCreateContentPacketWithUserAndNatP2PCachedTransfer_Parms), Z_Construct_UFunction_UEOSNatP2PContentPacket_CreateContentPacketWithUserAndNatP2PCachedTransfer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSNatP2PContentPacket_CreateContentPacketWithUserAndNatP2PCachedTransfer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSNatP2PContentPacket_CreateContentPacketWithUserAndNatP2PCachedTransfer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSNatP2PContentPacket_CreateContentPacketWithUserAndNatP2PCachedTransfer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSNatP2PContentPacket_CreateContentPacketWithUserAndNatP2PCachedTransfer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSNatP2PContentPacket_CreateContentPacketWithUserAndNatP2PCachedTransfer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSNatP2PContentPacket_CreateUserContentBinary_Statics
	{
		struct EOSNatP2PContentPacket_eventCreateUserContentBinary_Parms
		{
			UEOSUserContentBinary* _pcContent;
			UEOSNatP2PBinary* _pcBinary;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcContent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcBinary;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSNatP2PContentPacket_CreateUserContentBinary_Statics::NewProp__pcContent = { "_pcContent", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSNatP2PContentPacket_eventCreateUserContentBinary_Parms, _pcContent), Z_Construct_UClass_UEOSUserContentBinary_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSNatP2PContentPacket_CreateUserContentBinary_Statics::NewProp__pcBinary = { "_pcBinary", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSNatP2PContentPacket_eventCreateUserContentBinary_Parms, _pcBinary), Z_Construct_UClass_UEOSNatP2PBinary_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSNatP2PContentPacket_CreateUserContentBinary_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSNatP2PContentPacket_eventCreateUserContentBinary_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSNatP2PContentPacket_CreateUserContentBinary_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSNatP2PContentPacket_eventCreateUserContentBinary_Parms), &Z_Construct_UFunction_UEOSNatP2PContentPacket_CreateUserContentBinary_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSNatP2PContentPacket_CreateUserContentBinary_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSNatP2PContentPacket_CreateUserContentBinary_Statics::NewProp__pcContent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSNatP2PContentPacket_CreateUserContentBinary_Statics::NewProp__pcBinary,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSNatP2PContentPacket_CreateUserContentBinary_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSNatP2PContentPacket_CreateUserContentBinary_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSNatP2PContentPacket.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSNatP2PContentPacket_CreateUserContentBinary_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSNatP2PContentPacket, nullptr, "CreateUserContentBinary", nullptr, nullptr, sizeof(EOSNatP2PContentPacket_eventCreateUserContentBinary_Parms), Z_Construct_UFunction_UEOSNatP2PContentPacket_CreateUserContentBinary_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSNatP2PContentPacket_CreateUserContentBinary_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSNatP2PContentPacket_CreateUserContentBinary_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSNatP2PContentPacket_CreateUserContentBinary_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSNatP2PContentPacket_CreateUserContentBinary()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSNatP2PContentPacket_CreateUserContentBinary_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSNatP2PContentPacket_SetContentBinary_Statics
	{
		struct EOSNatP2PContentPacket_eventSetContentBinary_Parms
		{
			UEOSUserContentBinary* _pcContent;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcContent;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSNatP2PContentPacket_SetContentBinary_Statics::NewProp__pcContent = { "_pcContent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSNatP2PContentPacket_eventSetContentBinary_Parms, _pcContent), Z_Construct_UClass_UEOSUserContentBinary_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSNatP2PContentPacket_SetContentBinary_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSNatP2PContentPacket_eventSetContentBinary_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSNatP2PContentPacket_SetContentBinary_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSNatP2PContentPacket_eventSetContentBinary_Parms), &Z_Construct_UFunction_UEOSNatP2PContentPacket_SetContentBinary_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSNatP2PContentPacket_SetContentBinary_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSNatP2PContentPacket_SetContentBinary_Statics::NewProp__pcContent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSNatP2PContentPacket_SetContentBinary_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSNatP2PContentPacket_SetContentBinary_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSNatP2PContentPacket.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSNatP2PContentPacket_SetContentBinary_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSNatP2PContentPacket, nullptr, "SetContentBinary", nullptr, nullptr, sizeof(EOSNatP2PContentPacket_eventSetContentBinary_Parms), Z_Construct_UFunction_UEOSNatP2PContentPacket_SetContentBinary_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSNatP2PContentPacket_SetContentBinary_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSNatP2PContentPacket_SetContentBinary_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSNatP2PContentPacket_SetContentBinary_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSNatP2PContentPacket_SetContentBinary()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSNatP2PContentPacket_SetContentBinary_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEOSNatP2PContentPacket_NoRegister()
	{
		return UEOSNatP2PContentPacket::StaticClass();
	}
	struct Z_Construct_UClass_UEOSNatP2PContentPacket_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_pcBinary_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_pcBinary;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEOSNatP2PContentPacket_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEOSNatP2PPacketBase,
		(UObject* (*)())Z_Construct_UPackage__Script_yEOSSDK,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEOSNatP2PContentPacket_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEOSNatP2PContentPacket_CreateContentPacket, "CreateContentPacket" }, // 1809447749
		{ &Z_Construct_UFunction_UEOSNatP2PContentPacket_CreateContentPacketWithNatP2PCachedTransfer, "CreateContentPacketWithNatP2PCachedTransfer" }, // 2790365465
		{ &Z_Construct_UFunction_UEOSNatP2PContentPacket_CreateContentPacketWithUserAndNatP2PCachedTransfer, "CreateContentPacketWithUserAndNatP2PCachedTransfer" }, // 757505032
		{ &Z_Construct_UFunction_UEOSNatP2PContentPacket_CreateUserContentBinary, "CreateUserContentBinary" }, // 891813109
		{ &Z_Construct_UFunction_UEOSNatP2PContentPacket_SetContentBinary, "SetContentBinary" }, // 364063542
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSNatP2PContentPacket_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "EOSNatP2PContentPacket.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/EOSNatP2PContentPacket.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSNatP2PContentPacket_Statics::NewProp_m_pcBinary_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSNatP2PContentPacket" },
		{ "ModuleRelativePath", "Public/EOSNatP2PContentPacket.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEOSNatP2PContentPacket_Statics::NewProp_m_pcBinary = { "m_pcBinary", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSNatP2PContentPacket, m_pcBinary), Z_Construct_UClass_UEOSUserContentBinary_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEOSNatP2PContentPacket_Statics::NewProp_m_pcBinary_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSNatP2PContentPacket_Statics::NewProp_m_pcBinary_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEOSNatP2PContentPacket_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSNatP2PContentPacket_Statics::NewProp_m_pcBinary,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEOSNatP2PContentPacket_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEOSNatP2PContentPacket>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEOSNatP2PContentPacket_Statics::ClassParams = {
		&UEOSNatP2PContentPacket::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UEOSNatP2PContentPacket_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UEOSNatP2PContentPacket_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEOSNatP2PContentPacket_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSNatP2PContentPacket_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEOSNatP2PContentPacket()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEOSNatP2PContentPacket_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEOSNatP2PContentPacket, 1195706962);
	template<> YEOSSDK_API UClass* StaticClass<UEOSNatP2PContentPacket>()
	{
		return UEOSNatP2PContentPacket::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEOSNatP2PContentPacket(Z_Construct_UClass_UEOSNatP2PContentPacket, &UEOSNatP2PContentPacket::StaticClass, TEXT("/Script/yEOSSDK"), TEXT("UEOSNatP2PContentPacket"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEOSNatP2PContentPacket);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
