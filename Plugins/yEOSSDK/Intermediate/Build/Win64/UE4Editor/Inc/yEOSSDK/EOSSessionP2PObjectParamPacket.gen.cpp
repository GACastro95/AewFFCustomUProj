// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yEOSSDK/Public/EOSSessionP2PObjectParamPacket.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOSSessionP2PObjectParamPacket() {}
// Cross Module References
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSSessionP2PObjectParamPacket_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSSessionP2PObjectParamPacket();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSSessionP2PPacketBase();
	UPackage* Z_Construct_UPackage__Script_yEOSSDK();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	YEOSSDK_API UScriptStruct* Z_Construct_UScriptStruct_FEOSSessionP2PObjectParamData();
	YEOSSDK_API UEnum* Z_Construct_UEnum_yEOSSDK_EEOSSessionObjectParamType();
// End Cross Module References
	DEFINE_FUNCTION(UEOSSessionP2PObjectParamPacket::execAddCharacter)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__sIndex);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out__stTransform);
		P_GET_PROPERTY(FStrProperty,Z_Param__strProductUserID);
		P_GET_PROPERTY(FIntProperty,Z_Param__sKind);
		P_GET_PROPERTY(FByteProperty,Z_Param__sUserParam);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AddCharacter(Z_Param__sIndex,Z_Param_Out__stTransform,Z_Param__strProductUserID,Z_Param__sKind,Z_Param__sUserParam);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSessionP2PObjectParamPacket::execAddObject)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__sIndex);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out__stTransform);
		P_GET_PROPERTY(FStrProperty,Z_Param__strProductUserID);
		P_GET_PROPERTY(FIntProperty,Z_Param__sKind);
		P_GET_PROPERTY(FByteProperty,Z_Param__sUserParam);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AddObject(Z_Param__sIndex,Z_Param_Out__stTransform,Z_Param__strProductUserID,Z_Param__sKind,Z_Param__sUserParam);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSessionP2PObjectParamPacket::execGetDataIndex)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetDataIndex();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSessionP2PObjectParamPacket::execGetKind)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__sIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetKind(Z_Param__sIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSessionP2PObjectParamPacket::execGetNumberOfDeta)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetNumberOfDeta();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSessionP2PObjectParamPacket::execGetNumberOfObjects)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetNumberOfObjects();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSessionP2PObjectParamPacket::execGetObjectData)
	{
		P_GET_STRUCT_REF(FEOSSessionP2PObjectParamData,Z_Param_Out__stObjectParamData);
		P_GET_PROPERTY(FIntProperty,Z_Param__sIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetObjectData(Z_Param_Out__stObjectParamData,Z_Param__sIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSessionP2PObjectParamPacket::execGetProductUserID)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__sIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetProductUserID(Z_Param__sIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSessionP2PObjectParamPacket::execGetTransform)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__sIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=P_THIS->GetTransform(Z_Param__sIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSessionP2PObjectParamPacket::execGetType)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__sIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EEOSSessionObjectParamType*)Z_Param__Result=P_THIS->GetType(Z_Param__sIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSessionP2PObjectParamPacket::execGetUserParam)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__sIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(uint8*)Z_Param__Result=P_THIS->GetUserParam(Z_Param__sIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSessionP2PObjectParamPacket::execSend)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Send();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSessionP2PObjectParamPacket::execSetPacketInfo)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__sIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param__sMaxNum);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetPacketInfo(Z_Param__sIndex,Z_Param__sMaxNum);
		P_NATIVE_END;
	}
	void UEOSSessionP2PObjectParamPacket::StaticRegisterNativesUEOSSessionP2PObjectParamPacket()
	{
		UClass* Class = UEOSSessionP2PObjectParamPacket::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddCharacter", &UEOSSessionP2PObjectParamPacket::execAddCharacter },
			{ "AddObject", &UEOSSessionP2PObjectParamPacket::execAddObject },
			{ "GetDataIndex", &UEOSSessionP2PObjectParamPacket::execGetDataIndex },
			{ "GetKind", &UEOSSessionP2PObjectParamPacket::execGetKind },
			{ "GetNumberOfDeta", &UEOSSessionP2PObjectParamPacket::execGetNumberOfDeta },
			{ "GetNumberOfObjects", &UEOSSessionP2PObjectParamPacket::execGetNumberOfObjects },
			{ "GetObjectData", &UEOSSessionP2PObjectParamPacket::execGetObjectData },
			{ "GetProductUserID", &UEOSSessionP2PObjectParamPacket::execGetProductUserID },
			{ "GetTransform", &UEOSSessionP2PObjectParamPacket::execGetTransform },
			{ "GetType", &UEOSSessionP2PObjectParamPacket::execGetType },
			{ "GetUserParam", &UEOSSessionP2PObjectParamPacket::execGetUserParam },
			{ "Send", &UEOSSessionP2PObjectParamPacket::execSend },
			{ "SetPacketInfo", &UEOSSessionP2PObjectParamPacket::execSetPacketInfo },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_AddCharacter_Statics
	{
		struct EOSSessionP2PObjectParamPacket_eventAddCharacter_Parms
		{
			int32 _sIndex;
			FTransform _stTransform;
			FString _strProductUserID;
			int32 _sKind;
			uint8 _sUserParam;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__sIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__stTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__stTransform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strProductUserID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strProductUserID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__sKind;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__sUserParam;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_AddCharacter_Statics::NewProp__sIndex = { "_sIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2PObjectParamPacket_eventAddCharacter_Parms, _sIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_AddCharacter_Statics::NewProp__stTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_AddCharacter_Statics::NewProp__stTransform = { "_stTransform", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2PObjectParamPacket_eventAddCharacter_Parms, _stTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_AddCharacter_Statics::NewProp__stTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_AddCharacter_Statics::NewProp__stTransform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_AddCharacter_Statics::NewProp__strProductUserID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_AddCharacter_Statics::NewProp__strProductUserID = { "_strProductUserID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2PObjectParamPacket_eventAddCharacter_Parms, _strProductUserID), METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_AddCharacter_Statics::NewProp__strProductUserID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_AddCharacter_Statics::NewProp__strProductUserID_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_AddCharacter_Statics::NewProp__sKind = { "_sKind", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2PObjectParamPacket_eventAddCharacter_Parms, _sKind), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_AddCharacter_Statics::NewProp__sUserParam = { "_sUserParam", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2PObjectParamPacket_eventAddCharacter_Parms, _sUserParam), nullptr, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_AddCharacter_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSSessionP2PObjectParamPacket_eventAddCharacter_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_AddCharacter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSSessionP2PObjectParamPacket_eventAddCharacter_Parms), &Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_AddCharacter_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_AddCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_AddCharacter_Statics::NewProp__sIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_AddCharacter_Statics::NewProp__stTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_AddCharacter_Statics::NewProp__strProductUserID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_AddCharacter_Statics::NewProp__sKind,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_AddCharacter_Statics::NewProp__sUserParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_AddCharacter_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_AddCharacter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2PObjectParamPacket.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_AddCharacter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2PObjectParamPacket, nullptr, "AddCharacter", nullptr, nullptr, sizeof(EOSSessionP2PObjectParamPacket_eventAddCharacter_Parms), Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_AddCharacter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_AddCharacter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_AddCharacter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_AddCharacter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_AddCharacter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_AddCharacter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_AddObject_Statics
	{
		struct EOSSessionP2PObjectParamPacket_eventAddObject_Parms
		{
			int32 _sIndex;
			FTransform _stTransform;
			FString _strProductUserID;
			int32 _sKind;
			uint8 _sUserParam;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__sIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__stTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__stTransform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strProductUserID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strProductUserID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__sKind;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__sUserParam;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_AddObject_Statics::NewProp__sIndex = { "_sIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2PObjectParamPacket_eventAddObject_Parms, _sIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_AddObject_Statics::NewProp__stTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_AddObject_Statics::NewProp__stTransform = { "_stTransform", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2PObjectParamPacket_eventAddObject_Parms, _stTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_AddObject_Statics::NewProp__stTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_AddObject_Statics::NewProp__stTransform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_AddObject_Statics::NewProp__strProductUserID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_AddObject_Statics::NewProp__strProductUserID = { "_strProductUserID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2PObjectParamPacket_eventAddObject_Parms, _strProductUserID), METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_AddObject_Statics::NewProp__strProductUserID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_AddObject_Statics::NewProp__strProductUserID_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_AddObject_Statics::NewProp__sKind = { "_sKind", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2PObjectParamPacket_eventAddObject_Parms, _sKind), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_AddObject_Statics::NewProp__sUserParam = { "_sUserParam", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2PObjectParamPacket_eventAddObject_Parms, _sUserParam), nullptr, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_AddObject_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSSessionP2PObjectParamPacket_eventAddObject_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_AddObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSSessionP2PObjectParamPacket_eventAddObject_Parms), &Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_AddObject_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_AddObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_AddObject_Statics::NewProp__sIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_AddObject_Statics::NewProp__stTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_AddObject_Statics::NewProp__strProductUserID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_AddObject_Statics::NewProp__sKind,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_AddObject_Statics::NewProp__sUserParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_AddObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_AddObject_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2PObjectParamPacket.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_AddObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2PObjectParamPacket, nullptr, "AddObject", nullptr, nullptr, sizeof(EOSSessionP2PObjectParamPacket_eventAddObject_Parms), Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_AddObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_AddObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_AddObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_AddObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_AddObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_AddObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_GetDataIndex_Statics
	{
		struct EOSSessionP2PObjectParamPacket_eventGetDataIndex_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_GetDataIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2PObjectParamPacket_eventGetDataIndex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_GetDataIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_GetDataIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_GetDataIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2PObjectParamPacket.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_GetDataIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2PObjectParamPacket, nullptr, "GetDataIndex", nullptr, nullptr, sizeof(EOSSessionP2PObjectParamPacket_eventGetDataIndex_Parms), Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_GetDataIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_GetDataIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_GetDataIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_GetDataIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_GetDataIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_GetDataIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_GetKind_Statics
	{
		struct EOSSessionP2PObjectParamPacket_eventGetKind_Parms
		{
			int32 _sIndex;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__sIndex;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_GetKind_Statics::NewProp__sIndex = { "_sIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2PObjectParamPacket_eventGetKind_Parms, _sIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_GetKind_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2PObjectParamPacket_eventGetKind_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_GetKind_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_GetKind_Statics::NewProp__sIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_GetKind_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_GetKind_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2PObjectParamPacket.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_GetKind_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2PObjectParamPacket, nullptr, "GetKind", nullptr, nullptr, sizeof(EOSSessionP2PObjectParamPacket_eventGetKind_Parms), Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_GetKind_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_GetKind_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_GetKind_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_GetKind_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_GetKind()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_GetKind_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_GetNumberOfDeta_Statics
	{
		struct EOSSessionP2PObjectParamPacket_eventGetNumberOfDeta_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_GetNumberOfDeta_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2PObjectParamPacket_eventGetNumberOfDeta_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_GetNumberOfDeta_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_GetNumberOfDeta_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_GetNumberOfDeta_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2PObjectParamPacket.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_GetNumberOfDeta_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2PObjectParamPacket, nullptr, "GetNumberOfDeta", nullptr, nullptr, sizeof(EOSSessionP2PObjectParamPacket_eventGetNumberOfDeta_Parms), Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_GetNumberOfDeta_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_GetNumberOfDeta_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_GetNumberOfDeta_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_GetNumberOfDeta_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_GetNumberOfDeta()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_GetNumberOfDeta_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_GetNumberOfObjects_Statics
	{
		struct EOSSessionP2PObjectParamPacket_eventGetNumberOfObjects_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_GetNumberOfObjects_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2PObjectParamPacket_eventGetNumberOfObjects_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_GetNumberOfObjects_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_GetNumberOfObjects_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_GetNumberOfObjects_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2PObjectParamPacket.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_GetNumberOfObjects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2PObjectParamPacket, nullptr, "GetNumberOfObjects", nullptr, nullptr, sizeof(EOSSessionP2PObjectParamPacket_eventGetNumberOfObjects_Parms), Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_GetNumberOfObjects_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_GetNumberOfObjects_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_GetNumberOfObjects_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_GetNumberOfObjects_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_GetNumberOfObjects()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_GetNumberOfObjects_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_GetObjectData_Statics
	{
		struct EOSSessionP2PObjectParamPacket_eventGetObjectData_Parms
		{
			FEOSSessionP2PObjectParamData _stObjectParamData;
			int32 _sIndex;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__stObjectParamData;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__sIndex;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_GetObjectData_Statics::NewProp__stObjectParamData = { "_stObjectParamData", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2PObjectParamPacket_eventGetObjectData_Parms, _stObjectParamData), Z_Construct_UScriptStruct_FEOSSessionP2PObjectParamData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_GetObjectData_Statics::NewProp__sIndex = { "_sIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2PObjectParamPacket_eventGetObjectData_Parms, _sIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_GetObjectData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSSessionP2PObjectParamPacket_eventGetObjectData_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_GetObjectData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSSessionP2PObjectParamPacket_eventGetObjectData_Parms), &Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_GetObjectData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_GetObjectData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_GetObjectData_Statics::NewProp__stObjectParamData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_GetObjectData_Statics::NewProp__sIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_GetObjectData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_GetObjectData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2PObjectParamPacket.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_GetObjectData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2PObjectParamPacket, nullptr, "GetObjectData", nullptr, nullptr, sizeof(EOSSessionP2PObjectParamPacket_eventGetObjectData_Parms), Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_GetObjectData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_GetObjectData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_GetObjectData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_GetObjectData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_GetObjectData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_GetObjectData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_GetProductUserID_Statics
	{
		struct EOSSessionP2PObjectParamPacket_eventGetProductUserID_Parms
		{
			int32 _sIndex;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__sIndex;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_GetProductUserID_Statics::NewProp__sIndex = { "_sIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2PObjectParamPacket_eventGetProductUserID_Parms, _sIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_GetProductUserID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2PObjectParamPacket_eventGetProductUserID_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_GetProductUserID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_GetProductUserID_Statics::NewProp__sIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_GetProductUserID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_GetProductUserID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2PObjectParamPacket.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_GetProductUserID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2PObjectParamPacket, nullptr, "GetProductUserID", nullptr, nullptr, sizeof(EOSSessionP2PObjectParamPacket_eventGetProductUserID_Parms), Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_GetProductUserID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_GetProductUserID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_GetProductUserID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_GetProductUserID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_GetProductUserID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_GetProductUserID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_GetTransform_Statics
	{
		struct EOSSessionP2PObjectParamPacket_eventGetTransform_Parms
		{
			int32 _sIndex;
			FTransform ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__sIndex;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_GetTransform_Statics::NewProp__sIndex = { "_sIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2PObjectParamPacket_eventGetTransform_Parms, _sIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_GetTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2PObjectParamPacket_eventGetTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_GetTransform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_GetTransform_Statics::NewProp__sIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_GetTransform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_GetTransform_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2PObjectParamPacket.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_GetTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2PObjectParamPacket, nullptr, "GetTransform", nullptr, nullptr, sizeof(EOSSessionP2PObjectParamPacket_eventGetTransform_Parms), Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_GetTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_GetTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_GetTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_GetTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_GetTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_GetTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_GetType_Statics
	{
		struct EOSSessionP2PObjectParamPacket_eventGetType_Parms
		{
			int32 _sIndex;
			EEOSSessionObjectParamType ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__sIndex;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_GetType_Statics::NewProp__sIndex = { "_sIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2PObjectParamPacket_eventGetType_Parms, _sIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_GetType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_GetType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2PObjectParamPacket_eventGetType_Parms, ReturnValue), Z_Construct_UEnum_yEOSSDK_EEOSSessionObjectParamType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_GetType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_GetType_Statics::NewProp__sIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_GetType_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_GetType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_GetType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2PObjectParamPacket.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_GetType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2PObjectParamPacket, nullptr, "GetType", nullptr, nullptr, sizeof(EOSSessionP2PObjectParamPacket_eventGetType_Parms), Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_GetType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_GetType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_GetType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_GetType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_GetType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_GetType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_GetUserParam_Statics
	{
		struct EOSSessionP2PObjectParamPacket_eventGetUserParam_Parms
		{
			int32 _sIndex;
			uint8 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__sIndex;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_GetUserParam_Statics::NewProp__sIndex = { "_sIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2PObjectParamPacket_eventGetUserParam_Parms, _sIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_GetUserParam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2PObjectParamPacket_eventGetUserParam_Parms, ReturnValue), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_GetUserParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_GetUserParam_Statics::NewProp__sIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_GetUserParam_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_GetUserParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2PObjectParamPacket.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_GetUserParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2PObjectParamPacket, nullptr, "GetUserParam", nullptr, nullptr, sizeof(EOSSessionP2PObjectParamPacket_eventGetUserParam_Parms), Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_GetUserParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_GetUserParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_GetUserParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_GetUserParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_GetUserParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_GetUserParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_Send_Statics
	{
		struct EOSSessionP2PObjectParamPacket_eventSend_Parms
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
	void Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_Send_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSSessionP2PObjectParamPacket_eventSend_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_Send_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSSessionP2PObjectParamPacket_eventSend_Parms), &Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_Send_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_Send_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_Send_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_Send_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2PObjectParamPacket.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_Send_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2PObjectParamPacket, nullptr, "Send", nullptr, nullptr, sizeof(EOSSessionP2PObjectParamPacket_eventSend_Parms), Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_Send_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_Send_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_Send_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_Send_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_Send()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_Send_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_SetPacketInfo_Statics
	{
		struct EOSSessionP2PObjectParamPacket_eventSetPacketInfo_Parms
		{
			int32 _sIndex;
			int32 _sMaxNum;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__sIndex;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__sMaxNum;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_SetPacketInfo_Statics::NewProp__sIndex = { "_sIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2PObjectParamPacket_eventSetPacketInfo_Parms, _sIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_SetPacketInfo_Statics::NewProp__sMaxNum = { "_sMaxNum", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2PObjectParamPacket_eventSetPacketInfo_Parms, _sMaxNum), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_SetPacketInfo_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSSessionP2PObjectParamPacket_eventSetPacketInfo_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_SetPacketInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSSessionP2PObjectParamPacket_eventSetPacketInfo_Parms), &Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_SetPacketInfo_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_SetPacketInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_SetPacketInfo_Statics::NewProp__sIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_SetPacketInfo_Statics::NewProp__sMaxNum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_SetPacketInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_SetPacketInfo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2PObjectParamPacket.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_SetPacketInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2PObjectParamPacket, nullptr, "SetPacketInfo", nullptr, nullptr, sizeof(EOSSessionP2PObjectParamPacket_eventSetPacketInfo_Parms), Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_SetPacketInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_SetPacketInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_SetPacketInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_SetPacketInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_SetPacketInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_SetPacketInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEOSSessionP2PObjectParamPacket_NoRegister()
	{
		return UEOSSessionP2PObjectParamPacket::StaticClass();
	}
	struct Z_Construct_UClass_UEOSSessionP2PObjectParamPacket_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEOSSessionP2PObjectParamPacket_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEOSSessionP2PPacketBase,
		(UObject* (*)())Z_Construct_UPackage__Script_yEOSSDK,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEOSSessionP2PObjectParamPacket_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_AddCharacter, "AddCharacter" }, // 16338329
		{ &Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_AddObject, "AddObject" }, // 1811393055
		{ &Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_GetDataIndex, "GetDataIndex" }, // 435235632
		{ &Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_GetKind, "GetKind" }, // 427036383
		{ &Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_GetNumberOfDeta, "GetNumberOfDeta" }, // 1710292414
		{ &Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_GetNumberOfObjects, "GetNumberOfObjects" }, // 751140765
		{ &Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_GetObjectData, "GetObjectData" }, // 1346996422
		{ &Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_GetProductUserID, "GetProductUserID" }, // 565457024
		{ &Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_GetTransform, "GetTransform" }, // 1695107840
		{ &Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_GetType, "GetType" }, // 162093471
		{ &Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_GetUserParam, "GetUserParam" }, // 4025972404
		{ &Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_Send, "Send" }, // 2681593839
		{ &Z_Construct_UFunction_UEOSSessionP2PObjectParamPacket_SetPacketInfo, "SetPacketInfo" }, // 453269218
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSSessionP2PObjectParamPacket_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "EOSSessionP2PObjectParamPacket.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/EOSSessionP2PObjectParamPacket.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEOSSessionP2PObjectParamPacket_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEOSSessionP2PObjectParamPacket>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEOSSessionP2PObjectParamPacket_Statics::ClassParams = {
		&UEOSSessionP2PObjectParamPacket::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UEOSSessionP2PObjectParamPacket_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSSessionP2PObjectParamPacket_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEOSSessionP2PObjectParamPacket()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEOSSessionP2PObjectParamPacket_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEOSSessionP2PObjectParamPacket, 2667580776);
	template<> YEOSSDK_API UClass* StaticClass<UEOSSessionP2PObjectParamPacket>()
	{
		return UEOSSessionP2PObjectParamPacket::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEOSSessionP2PObjectParamPacket(Z_Construct_UClass_UEOSSessionP2PObjectParamPacket, &UEOSSessionP2PObjectParamPacket::StaticClass, TEXT("/Script/yEOSSDK"), TEXT("UEOSSessionP2PObjectParamPacket"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEOSSessionP2PObjectParamPacket);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
