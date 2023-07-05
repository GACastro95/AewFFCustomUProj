// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yEOSSDK/Public/EOSSessionP2PMemberInfoPacket.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOSSessionP2PMemberInfoPacket() {}
// Cross Module References
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSSessionP2PMemberInfoPacket_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSSessionP2PMemberInfoPacket();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSSessionP2PSynchronizedPacketBase();
	UPackage* Z_Construct_UPackage__Script_yEOSSDK();
	YEOSSDK_API UScriptStruct* Z_Construct_UScriptStruct_FEOSSessionP2PMemberInfoData();
// End Cross Module References
	DEFINE_FUNCTION(UEOSSessionP2PMemberInfoPacket::execAddMember)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__sMemberIndex);
		P_GET_PROPERTY(FStrProperty,Z_Param__strProductUserID);
		P_GET_UBOOL(Z_Param__bRemvoed);
		P_GET_UBOOL(Z_Param__bDisconnected);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AddMember(Z_Param__sMemberIndex,Z_Param__strProductUserID,Z_Param__bRemvoed,Z_Param__bDisconnected);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSessionP2PMemberInfoPacket::execFindMember)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__strProductUserID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->FindMember(Z_Param__strProductUserID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSessionP2PMemberInfoPacket::execGetMemberInfoData)
	{
		P_GET_STRUCT_REF(FEOSSessionP2PMemberInfoData,Z_Param_Out__stMemberData);
		P_GET_PROPERTY(FIntProperty,Z_Param__sIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetMemberInfoData(Z_Param_Out__stMemberData,Z_Param__sIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSessionP2PMemberInfoPacket::execGetTotalMemberNum)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(uint8*)Z_Param__Result=P_THIS->GetTotalMemberNum();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSessionP2PMemberInfoPacket::execSend)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Send();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSessionP2PMemberInfoPacket::execUpdateMember)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__sIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param__sMemberIndex);
		P_GET_PROPERTY(FStrProperty,Z_Param__strProductUserID);
		P_GET_UBOOL(Z_Param__bRemvoed);
		P_GET_UBOOL(Z_Param__bDisconnected);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->UpdateMember(Z_Param__sIndex,Z_Param__sMemberIndex,Z_Param__strProductUserID,Z_Param__bRemvoed,Z_Param__bDisconnected);
		P_NATIVE_END;
	}
	void UEOSSessionP2PMemberInfoPacket::StaticRegisterNativesUEOSSessionP2PMemberInfoPacket()
	{
		UClass* Class = UEOSSessionP2PMemberInfoPacket::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddMember", &UEOSSessionP2PMemberInfoPacket::execAddMember },
			{ "FindMember", &UEOSSessionP2PMemberInfoPacket::execFindMember },
			{ "GetMemberInfoData", &UEOSSessionP2PMemberInfoPacket::execGetMemberInfoData },
			{ "GetTotalMemberNum", &UEOSSessionP2PMemberInfoPacket::execGetTotalMemberNum },
			{ "Send", &UEOSSessionP2PMemberInfoPacket::execSend },
			{ "UpdateMember", &UEOSSessionP2PMemberInfoPacket::execUpdateMember },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEOSSessionP2PMemberInfoPacket_AddMember_Statics
	{
		struct EOSSessionP2PMemberInfoPacket_eventAddMember_Parms
		{
			int32 _sMemberIndex;
			FString _strProductUserID;
			bool _bRemvoed;
			bool _bDisconnected;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__sMemberIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strProductUserID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strProductUserID;
		static void NewProp__bRemvoed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__bRemvoed;
		static void NewProp__bDisconnected_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__bDisconnected;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEOSSessionP2PMemberInfoPacket_AddMember_Statics::NewProp__sMemberIndex = { "_sMemberIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2PMemberInfoPacket_eventAddMember_Parms, _sMemberIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2PMemberInfoPacket_AddMember_Statics::NewProp__strProductUserID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSSessionP2PMemberInfoPacket_AddMember_Statics::NewProp__strProductUserID = { "_strProductUserID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2PMemberInfoPacket_eventAddMember_Parms, _strProductUserID), METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2PMemberInfoPacket_AddMember_Statics::NewProp__strProductUserID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PMemberInfoPacket_AddMember_Statics::NewProp__strProductUserID_MetaData)) };
	void Z_Construct_UFunction_UEOSSessionP2PMemberInfoPacket_AddMember_Statics::NewProp__bRemvoed_SetBit(void* Obj)
	{
		((EOSSessionP2PMemberInfoPacket_eventAddMember_Parms*)Obj)->_bRemvoed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSSessionP2PMemberInfoPacket_AddMember_Statics::NewProp__bRemvoed = { "_bRemvoed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSSessionP2PMemberInfoPacket_eventAddMember_Parms), &Z_Construct_UFunction_UEOSSessionP2PMemberInfoPacket_AddMember_Statics::NewProp__bRemvoed_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSSessionP2PMemberInfoPacket_AddMember_Statics::NewProp__bDisconnected_SetBit(void* Obj)
	{
		((EOSSessionP2PMemberInfoPacket_eventAddMember_Parms*)Obj)->_bDisconnected = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSSessionP2PMemberInfoPacket_AddMember_Statics::NewProp__bDisconnected = { "_bDisconnected", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSSessionP2PMemberInfoPacket_eventAddMember_Parms), &Z_Construct_UFunction_UEOSSessionP2PMemberInfoPacket_AddMember_Statics::NewProp__bDisconnected_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSSessionP2PMemberInfoPacket_AddMember_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSSessionP2PMemberInfoPacket_eventAddMember_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSSessionP2PMemberInfoPacket_AddMember_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSSessionP2PMemberInfoPacket_eventAddMember_Parms), &Z_Construct_UFunction_UEOSSessionP2PMemberInfoPacket_AddMember_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionP2PMemberInfoPacket_AddMember_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PMemberInfoPacket_AddMember_Statics::NewProp__sMemberIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PMemberInfoPacket_AddMember_Statics::NewProp__strProductUserID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PMemberInfoPacket_AddMember_Statics::NewProp__bRemvoed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PMemberInfoPacket_AddMember_Statics::NewProp__bDisconnected,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PMemberInfoPacket_AddMember_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2PMemberInfoPacket_AddMember_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2PMemberInfoPacket.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2PMemberInfoPacket_AddMember_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2PMemberInfoPacket, nullptr, "AddMember", nullptr, nullptr, sizeof(EOSSessionP2PMemberInfoPacket_eventAddMember_Parms), Z_Construct_UFunction_UEOSSessionP2PMemberInfoPacket_AddMember_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PMemberInfoPacket_AddMember_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2PMemberInfoPacket_AddMember_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PMemberInfoPacket_AddMember_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2PMemberInfoPacket_AddMember()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2PMemberInfoPacket_AddMember_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionP2PMemberInfoPacket_FindMember_Statics
	{
		struct EOSSessionP2PMemberInfoPacket_eventFindMember_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2PMemberInfoPacket_FindMember_Statics::NewProp__strProductUserID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSSessionP2PMemberInfoPacket_FindMember_Statics::NewProp__strProductUserID = { "_strProductUserID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2PMemberInfoPacket_eventFindMember_Parms, _strProductUserID), METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2PMemberInfoPacket_FindMember_Statics::NewProp__strProductUserID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PMemberInfoPacket_FindMember_Statics::NewProp__strProductUserID_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEOSSessionP2PMemberInfoPacket_FindMember_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2PMemberInfoPacket_eventFindMember_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionP2PMemberInfoPacket_FindMember_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PMemberInfoPacket_FindMember_Statics::NewProp__strProductUserID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PMemberInfoPacket_FindMember_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2PMemberInfoPacket_FindMember_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2PMemberInfoPacket.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2PMemberInfoPacket_FindMember_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2PMemberInfoPacket, nullptr, "FindMember", nullptr, nullptr, sizeof(EOSSessionP2PMemberInfoPacket_eventFindMember_Parms), Z_Construct_UFunction_UEOSSessionP2PMemberInfoPacket_FindMember_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PMemberInfoPacket_FindMember_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2PMemberInfoPacket_FindMember_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PMemberInfoPacket_FindMember_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2PMemberInfoPacket_FindMember()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2PMemberInfoPacket_FindMember_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionP2PMemberInfoPacket_GetMemberInfoData_Statics
	{
		struct EOSSessionP2PMemberInfoPacket_eventGetMemberInfoData_Parms
		{
			FEOSSessionP2PMemberInfoData _stMemberData;
			int32 _sIndex;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__stMemberData;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__sIndex;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEOSSessionP2PMemberInfoPacket_GetMemberInfoData_Statics::NewProp__stMemberData = { "_stMemberData", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2PMemberInfoPacket_eventGetMemberInfoData_Parms, _stMemberData), Z_Construct_UScriptStruct_FEOSSessionP2PMemberInfoData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEOSSessionP2PMemberInfoPacket_GetMemberInfoData_Statics::NewProp__sIndex = { "_sIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2PMemberInfoPacket_eventGetMemberInfoData_Parms, _sIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSSessionP2PMemberInfoPacket_GetMemberInfoData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSSessionP2PMemberInfoPacket_eventGetMemberInfoData_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSSessionP2PMemberInfoPacket_GetMemberInfoData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSSessionP2PMemberInfoPacket_eventGetMemberInfoData_Parms), &Z_Construct_UFunction_UEOSSessionP2PMemberInfoPacket_GetMemberInfoData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionP2PMemberInfoPacket_GetMemberInfoData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PMemberInfoPacket_GetMemberInfoData_Statics::NewProp__stMemberData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PMemberInfoPacket_GetMemberInfoData_Statics::NewProp__sIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PMemberInfoPacket_GetMemberInfoData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2PMemberInfoPacket_GetMemberInfoData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2PMemberInfoPacket.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2PMemberInfoPacket_GetMemberInfoData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2PMemberInfoPacket, nullptr, "GetMemberInfoData", nullptr, nullptr, sizeof(EOSSessionP2PMemberInfoPacket_eventGetMemberInfoData_Parms), Z_Construct_UFunction_UEOSSessionP2PMemberInfoPacket_GetMemberInfoData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PMemberInfoPacket_GetMemberInfoData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2PMemberInfoPacket_GetMemberInfoData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PMemberInfoPacket_GetMemberInfoData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2PMemberInfoPacket_GetMemberInfoData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2PMemberInfoPacket_GetMemberInfoData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionP2PMemberInfoPacket_GetTotalMemberNum_Statics
	{
		struct EOSSessionP2PMemberInfoPacket_eventGetTotalMemberNum_Parms
		{
			uint8 ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEOSSessionP2PMemberInfoPacket_GetTotalMemberNum_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2PMemberInfoPacket_eventGetTotalMemberNum_Parms, ReturnValue), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionP2PMemberInfoPacket_GetTotalMemberNum_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PMemberInfoPacket_GetTotalMemberNum_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2PMemberInfoPacket_GetTotalMemberNum_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2PMemberInfoPacket.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2PMemberInfoPacket_GetTotalMemberNum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2PMemberInfoPacket, nullptr, "GetTotalMemberNum", nullptr, nullptr, sizeof(EOSSessionP2PMemberInfoPacket_eventGetTotalMemberNum_Parms), Z_Construct_UFunction_UEOSSessionP2PMemberInfoPacket_GetTotalMemberNum_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PMemberInfoPacket_GetTotalMemberNum_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2PMemberInfoPacket_GetTotalMemberNum_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PMemberInfoPacket_GetTotalMemberNum_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2PMemberInfoPacket_GetTotalMemberNum()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2PMemberInfoPacket_GetTotalMemberNum_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionP2PMemberInfoPacket_Send_Statics
	{
		struct EOSSessionP2PMemberInfoPacket_eventSend_Parms
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
	void Z_Construct_UFunction_UEOSSessionP2PMemberInfoPacket_Send_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSSessionP2PMemberInfoPacket_eventSend_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSSessionP2PMemberInfoPacket_Send_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSSessionP2PMemberInfoPacket_eventSend_Parms), &Z_Construct_UFunction_UEOSSessionP2PMemberInfoPacket_Send_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionP2PMemberInfoPacket_Send_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PMemberInfoPacket_Send_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2PMemberInfoPacket_Send_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2PMemberInfoPacket.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2PMemberInfoPacket_Send_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2PMemberInfoPacket, nullptr, "Send", nullptr, nullptr, sizeof(EOSSessionP2PMemberInfoPacket_eventSend_Parms), Z_Construct_UFunction_UEOSSessionP2PMemberInfoPacket_Send_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PMemberInfoPacket_Send_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2PMemberInfoPacket_Send_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PMemberInfoPacket_Send_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2PMemberInfoPacket_Send()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2PMemberInfoPacket_Send_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionP2PMemberInfoPacket_UpdateMember_Statics
	{
		struct EOSSessionP2PMemberInfoPacket_eventUpdateMember_Parms
		{
			int32 _sIndex;
			int32 _sMemberIndex;
			FString _strProductUserID;
			bool _bRemvoed;
			bool _bDisconnected;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__sIndex;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__sMemberIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strProductUserID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strProductUserID;
		static void NewProp__bRemvoed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__bRemvoed;
		static void NewProp__bDisconnected_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__bDisconnected;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEOSSessionP2PMemberInfoPacket_UpdateMember_Statics::NewProp__sIndex = { "_sIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2PMemberInfoPacket_eventUpdateMember_Parms, _sIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEOSSessionP2PMemberInfoPacket_UpdateMember_Statics::NewProp__sMemberIndex = { "_sMemberIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2PMemberInfoPacket_eventUpdateMember_Parms, _sMemberIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2PMemberInfoPacket_UpdateMember_Statics::NewProp__strProductUserID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSSessionP2PMemberInfoPacket_UpdateMember_Statics::NewProp__strProductUserID = { "_strProductUserID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2PMemberInfoPacket_eventUpdateMember_Parms, _strProductUserID), METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2PMemberInfoPacket_UpdateMember_Statics::NewProp__strProductUserID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PMemberInfoPacket_UpdateMember_Statics::NewProp__strProductUserID_MetaData)) };
	void Z_Construct_UFunction_UEOSSessionP2PMemberInfoPacket_UpdateMember_Statics::NewProp__bRemvoed_SetBit(void* Obj)
	{
		((EOSSessionP2PMemberInfoPacket_eventUpdateMember_Parms*)Obj)->_bRemvoed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSSessionP2PMemberInfoPacket_UpdateMember_Statics::NewProp__bRemvoed = { "_bRemvoed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSSessionP2PMemberInfoPacket_eventUpdateMember_Parms), &Z_Construct_UFunction_UEOSSessionP2PMemberInfoPacket_UpdateMember_Statics::NewProp__bRemvoed_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSSessionP2PMemberInfoPacket_UpdateMember_Statics::NewProp__bDisconnected_SetBit(void* Obj)
	{
		((EOSSessionP2PMemberInfoPacket_eventUpdateMember_Parms*)Obj)->_bDisconnected = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSSessionP2PMemberInfoPacket_UpdateMember_Statics::NewProp__bDisconnected = { "_bDisconnected", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSSessionP2PMemberInfoPacket_eventUpdateMember_Parms), &Z_Construct_UFunction_UEOSSessionP2PMemberInfoPacket_UpdateMember_Statics::NewProp__bDisconnected_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSSessionP2PMemberInfoPacket_UpdateMember_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSSessionP2PMemberInfoPacket_eventUpdateMember_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSSessionP2PMemberInfoPacket_UpdateMember_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSSessionP2PMemberInfoPacket_eventUpdateMember_Parms), &Z_Construct_UFunction_UEOSSessionP2PMemberInfoPacket_UpdateMember_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionP2PMemberInfoPacket_UpdateMember_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PMemberInfoPacket_UpdateMember_Statics::NewProp__sIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PMemberInfoPacket_UpdateMember_Statics::NewProp__sMemberIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PMemberInfoPacket_UpdateMember_Statics::NewProp__strProductUserID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PMemberInfoPacket_UpdateMember_Statics::NewProp__bRemvoed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PMemberInfoPacket_UpdateMember_Statics::NewProp__bDisconnected,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PMemberInfoPacket_UpdateMember_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2PMemberInfoPacket_UpdateMember_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2PMemberInfoPacket.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2PMemberInfoPacket_UpdateMember_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2PMemberInfoPacket, nullptr, "UpdateMember", nullptr, nullptr, sizeof(EOSSessionP2PMemberInfoPacket_eventUpdateMember_Parms), Z_Construct_UFunction_UEOSSessionP2PMemberInfoPacket_UpdateMember_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PMemberInfoPacket_UpdateMember_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2PMemberInfoPacket_UpdateMember_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PMemberInfoPacket_UpdateMember_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2PMemberInfoPacket_UpdateMember()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2PMemberInfoPacket_UpdateMember_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEOSSessionP2PMemberInfoPacket_NoRegister()
	{
		return UEOSSessionP2PMemberInfoPacket::StaticClass();
	}
	struct Z_Construct_UClass_UEOSSessionP2PMemberInfoPacket_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEOSSessionP2PMemberInfoPacket_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEOSSessionP2PSynchronizedPacketBase,
		(UObject* (*)())Z_Construct_UPackage__Script_yEOSSDK,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEOSSessionP2PMemberInfoPacket_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEOSSessionP2PMemberInfoPacket_AddMember, "AddMember" }, // 2182519029
		{ &Z_Construct_UFunction_UEOSSessionP2PMemberInfoPacket_FindMember, "FindMember" }, // 655355519
		{ &Z_Construct_UFunction_UEOSSessionP2PMemberInfoPacket_GetMemberInfoData, "GetMemberInfoData" }, // 4017931656
		{ &Z_Construct_UFunction_UEOSSessionP2PMemberInfoPacket_GetTotalMemberNum, "GetTotalMemberNum" }, // 2830810554
		{ &Z_Construct_UFunction_UEOSSessionP2PMemberInfoPacket_Send, "Send" }, // 3727364181
		{ &Z_Construct_UFunction_UEOSSessionP2PMemberInfoPacket_UpdateMember, "UpdateMember" }, // 3221584484
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSSessionP2PMemberInfoPacket_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "EOSSessionP2PMemberInfoPacket.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/EOSSessionP2PMemberInfoPacket.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEOSSessionP2PMemberInfoPacket_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEOSSessionP2PMemberInfoPacket>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEOSSessionP2PMemberInfoPacket_Statics::ClassParams = {
		&UEOSSessionP2PMemberInfoPacket::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UEOSSessionP2PMemberInfoPacket_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSSessionP2PMemberInfoPacket_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEOSSessionP2PMemberInfoPacket()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEOSSessionP2PMemberInfoPacket_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEOSSessionP2PMemberInfoPacket, 2863397425);
	template<> YEOSSDK_API UClass* StaticClass<UEOSSessionP2PMemberInfoPacket>()
	{
		return UEOSSessionP2PMemberInfoPacket::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEOSSessionP2PMemberInfoPacket(Z_Construct_UClass_UEOSSessionP2PMemberInfoPacket, &UEOSSessionP2PMemberInfoPacket::StaticClass, TEXT("/Script/yEOSSDK"), TEXT("UEOSSessionP2PMemberInfoPacket"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEOSSessionP2PMemberInfoPacket);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
