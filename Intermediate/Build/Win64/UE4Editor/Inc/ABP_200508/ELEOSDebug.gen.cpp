// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELEOSDebug.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELEOSDebug() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELEOSDebug_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELEOSDebug();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UClass* Z_Construct_UClass_UELEOSManager_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_AELEOSDebugUser_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_AELEOSDebugLobby_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_AELEOSDebugGameSession_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_AELEOSDebugFriend_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_AELEOSDebugCommon_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UELEOSDebug::execDispDebugCommon)
	{
		P_GET_UBOOL(Z_Param_Disp);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DispDebugCommon(Z_Param_Disp);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSDebug::execDispDebugFriend)
	{
		P_GET_UBOOL(Z_Param_Disp);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DispDebugFriend(Z_Param_Disp);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSDebug::execDispDebugGameSession)
	{
		P_GET_UBOOL(Z_Param_Disp);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DispDebugGameSession(Z_Param_Disp);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSDebug::execDispDebugLobby)
	{
		P_GET_UBOOL(Z_Param_Disp);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DispDebugLobby(Z_Param_Disp);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSDebug::execDispDebugUser)
	{
		P_GET_UBOOL(Z_Param_Disp);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DispDebugUser(Z_Param_Disp);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSDebug::execToggleDebugCommon)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ToggleDebugCommon();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSDebug::execToggleDebugFriend)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ToggleDebugFriend();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSDebug::execToggleDebugGameSession)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ToggleDebugGameSession();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSDebug::execToggleDebugLobby)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ToggleDebugLobby();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSDebug::execToggleDebugUser)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ToggleDebugUser();
		P_NATIVE_END;
	}
	void UELEOSDebug::StaticRegisterNativesUELEOSDebug()
	{
		UClass* Class = UELEOSDebug::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DispDebugCommon", &UELEOSDebug::execDispDebugCommon },
			{ "DispDebugFriend", &UELEOSDebug::execDispDebugFriend },
			{ "DispDebugGameSession", &UELEOSDebug::execDispDebugGameSession },
			{ "DispDebugLobby", &UELEOSDebug::execDispDebugLobby },
			{ "DispDebugUser", &UELEOSDebug::execDispDebugUser },
			{ "ToggleDebugCommon", &UELEOSDebug::execToggleDebugCommon },
			{ "ToggleDebugFriend", &UELEOSDebug::execToggleDebugFriend },
			{ "ToggleDebugGameSession", &UELEOSDebug::execToggleDebugGameSession },
			{ "ToggleDebugLobby", &UELEOSDebug::execToggleDebugLobby },
			{ "ToggleDebugUser", &UELEOSDebug::execToggleDebugUser },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELEOSDebug_DispDebugCommon_Statics
	{
		struct ELEOSDebug_eventDispDebugCommon_Parms
		{
			bool Disp;
		};
		static void NewProp_Disp_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Disp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELEOSDebug_DispDebugCommon_Statics::NewProp_Disp_SetBit(void* Obj)
	{
		((ELEOSDebug_eventDispDebugCommon_Parms*)Obj)->Disp = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELEOSDebug_DispDebugCommon_Statics::NewProp_Disp = { "Disp", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELEOSDebug_eventDispDebugCommon_Parms), &Z_Construct_UFunction_UELEOSDebug_DispDebugCommon_Statics::NewProp_Disp_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSDebug_DispDebugCommon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSDebug_DispDebugCommon_Statics::NewProp_Disp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSDebug_DispDebugCommon_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSDebug.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSDebug_DispDebugCommon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSDebug, nullptr, "DispDebugCommon", nullptr, nullptr, sizeof(ELEOSDebug_eventDispDebugCommon_Parms), Z_Construct_UFunction_UELEOSDebug_DispDebugCommon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSDebug_DispDebugCommon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSDebug_DispDebugCommon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSDebug_DispDebugCommon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSDebug_DispDebugCommon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSDebug_DispDebugCommon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSDebug_DispDebugFriend_Statics
	{
		struct ELEOSDebug_eventDispDebugFriend_Parms
		{
			bool Disp;
		};
		static void NewProp_Disp_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Disp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELEOSDebug_DispDebugFriend_Statics::NewProp_Disp_SetBit(void* Obj)
	{
		((ELEOSDebug_eventDispDebugFriend_Parms*)Obj)->Disp = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELEOSDebug_DispDebugFriend_Statics::NewProp_Disp = { "Disp", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELEOSDebug_eventDispDebugFriend_Parms), &Z_Construct_UFunction_UELEOSDebug_DispDebugFriend_Statics::NewProp_Disp_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSDebug_DispDebugFriend_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSDebug_DispDebugFriend_Statics::NewProp_Disp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSDebug_DispDebugFriend_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSDebug.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSDebug_DispDebugFriend_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSDebug, nullptr, "DispDebugFriend", nullptr, nullptr, sizeof(ELEOSDebug_eventDispDebugFriend_Parms), Z_Construct_UFunction_UELEOSDebug_DispDebugFriend_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSDebug_DispDebugFriend_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSDebug_DispDebugFriend_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSDebug_DispDebugFriend_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSDebug_DispDebugFriend()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSDebug_DispDebugFriend_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSDebug_DispDebugGameSession_Statics
	{
		struct ELEOSDebug_eventDispDebugGameSession_Parms
		{
			bool Disp;
		};
		static void NewProp_Disp_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Disp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELEOSDebug_DispDebugGameSession_Statics::NewProp_Disp_SetBit(void* Obj)
	{
		((ELEOSDebug_eventDispDebugGameSession_Parms*)Obj)->Disp = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELEOSDebug_DispDebugGameSession_Statics::NewProp_Disp = { "Disp", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELEOSDebug_eventDispDebugGameSession_Parms), &Z_Construct_UFunction_UELEOSDebug_DispDebugGameSession_Statics::NewProp_Disp_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSDebug_DispDebugGameSession_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSDebug_DispDebugGameSession_Statics::NewProp_Disp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSDebug_DispDebugGameSession_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSDebug.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSDebug_DispDebugGameSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSDebug, nullptr, "DispDebugGameSession", nullptr, nullptr, sizeof(ELEOSDebug_eventDispDebugGameSession_Parms), Z_Construct_UFunction_UELEOSDebug_DispDebugGameSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSDebug_DispDebugGameSession_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSDebug_DispDebugGameSession_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSDebug_DispDebugGameSession_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSDebug_DispDebugGameSession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSDebug_DispDebugGameSession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSDebug_DispDebugLobby_Statics
	{
		struct ELEOSDebug_eventDispDebugLobby_Parms
		{
			bool Disp;
		};
		static void NewProp_Disp_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Disp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELEOSDebug_DispDebugLobby_Statics::NewProp_Disp_SetBit(void* Obj)
	{
		((ELEOSDebug_eventDispDebugLobby_Parms*)Obj)->Disp = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELEOSDebug_DispDebugLobby_Statics::NewProp_Disp = { "Disp", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELEOSDebug_eventDispDebugLobby_Parms), &Z_Construct_UFunction_UELEOSDebug_DispDebugLobby_Statics::NewProp_Disp_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSDebug_DispDebugLobby_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSDebug_DispDebugLobby_Statics::NewProp_Disp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSDebug_DispDebugLobby_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSDebug.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSDebug_DispDebugLobby_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSDebug, nullptr, "DispDebugLobby", nullptr, nullptr, sizeof(ELEOSDebug_eventDispDebugLobby_Parms), Z_Construct_UFunction_UELEOSDebug_DispDebugLobby_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSDebug_DispDebugLobby_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSDebug_DispDebugLobby_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSDebug_DispDebugLobby_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSDebug_DispDebugLobby()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSDebug_DispDebugLobby_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSDebug_DispDebugUser_Statics
	{
		struct ELEOSDebug_eventDispDebugUser_Parms
		{
			bool Disp;
		};
		static void NewProp_Disp_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Disp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELEOSDebug_DispDebugUser_Statics::NewProp_Disp_SetBit(void* Obj)
	{
		((ELEOSDebug_eventDispDebugUser_Parms*)Obj)->Disp = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELEOSDebug_DispDebugUser_Statics::NewProp_Disp = { "Disp", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELEOSDebug_eventDispDebugUser_Parms), &Z_Construct_UFunction_UELEOSDebug_DispDebugUser_Statics::NewProp_Disp_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSDebug_DispDebugUser_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSDebug_DispDebugUser_Statics::NewProp_Disp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSDebug_DispDebugUser_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSDebug.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSDebug_DispDebugUser_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSDebug, nullptr, "DispDebugUser", nullptr, nullptr, sizeof(ELEOSDebug_eventDispDebugUser_Parms), Z_Construct_UFunction_UELEOSDebug_DispDebugUser_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSDebug_DispDebugUser_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSDebug_DispDebugUser_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSDebug_DispDebugUser_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSDebug_DispDebugUser()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSDebug_DispDebugUser_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSDebug_ToggleDebugCommon_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSDebug_ToggleDebugCommon_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSDebug.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSDebug_ToggleDebugCommon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSDebug, nullptr, "ToggleDebugCommon", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSDebug_ToggleDebugCommon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSDebug_ToggleDebugCommon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSDebug_ToggleDebugCommon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSDebug_ToggleDebugCommon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSDebug_ToggleDebugFriend_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSDebug_ToggleDebugFriend_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSDebug.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSDebug_ToggleDebugFriend_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSDebug, nullptr, "ToggleDebugFriend", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSDebug_ToggleDebugFriend_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSDebug_ToggleDebugFriend_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSDebug_ToggleDebugFriend()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSDebug_ToggleDebugFriend_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSDebug_ToggleDebugGameSession_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSDebug_ToggleDebugGameSession_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSDebug.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSDebug_ToggleDebugGameSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSDebug, nullptr, "ToggleDebugGameSession", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSDebug_ToggleDebugGameSession_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSDebug_ToggleDebugGameSession_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSDebug_ToggleDebugGameSession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSDebug_ToggleDebugGameSession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSDebug_ToggleDebugLobby_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSDebug_ToggleDebugLobby_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSDebug.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSDebug_ToggleDebugLobby_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSDebug, nullptr, "ToggleDebugLobby", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSDebug_ToggleDebugLobby_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSDebug_ToggleDebugLobby_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSDebug_ToggleDebugLobby()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSDebug_ToggleDebugLobby_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSDebug_ToggleDebugUser_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSDebug_ToggleDebugUser_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSDebug.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSDebug_ToggleDebugUser_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSDebug, nullptr, "ToggleDebugUser", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSDebug_ToggleDebugUser_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSDebug_ToggleDebugUser_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSDebug_ToggleDebugUser()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSDebug_ToggleDebugUser_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELEOSDebug_NoRegister()
	{
		return UELEOSDebug::StaticClass();
	}
	struct Z_Construct_UClass_UELEOSDebug_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ELEOSManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ELEOSManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ELEOSDebugUser_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ELEOSDebugUser;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ELEOSDebugLobby_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ELEOSDebugLobby;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ELEOSDebugGameSession_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ELEOSDebugGameSession;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ELEOSDebugFriend_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ELEOSDebugFriend;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ELEOSDebugCommon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ELEOSDebugCommon;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELEOSDebug_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELEOSDebug_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELEOSDebug_DispDebugCommon, "DispDebugCommon" }, // 2912339526
		{ &Z_Construct_UFunction_UELEOSDebug_DispDebugFriend, "DispDebugFriend" }, // 1032397964
		{ &Z_Construct_UFunction_UELEOSDebug_DispDebugGameSession, "DispDebugGameSession" }, // 2638376106
		{ &Z_Construct_UFunction_UELEOSDebug_DispDebugLobby, "DispDebugLobby" }, // 2187807335
		{ &Z_Construct_UFunction_UELEOSDebug_DispDebugUser, "DispDebugUser" }, // 1422467838
		{ &Z_Construct_UFunction_UELEOSDebug_ToggleDebugCommon, "ToggleDebugCommon" }, // 633298304
		{ &Z_Construct_UFunction_UELEOSDebug_ToggleDebugFriend, "ToggleDebugFriend" }, // 1975480971
		{ &Z_Construct_UFunction_UELEOSDebug_ToggleDebugGameSession, "ToggleDebugGameSession" }, // 2663084469
		{ &Z_Construct_UFunction_UELEOSDebug_ToggleDebugLobby, "ToggleDebugLobby" }, // 2080332841
		{ &Z_Construct_UFunction_UELEOSDebug_ToggleDebugUser, "ToggleDebugUser" }, // 1032761785
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELEOSDebug_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELEOSDebug.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELEOSDebug.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELEOSDebug_Statics::NewProp_ELEOSManager_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELEOSDebug" },
		{ "ModuleRelativePath", "Public/ELEOSDebug.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELEOSDebug_Statics::NewProp_ELEOSManager = { "ELEOSManager", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELEOSDebug, ELEOSManager), Z_Construct_UClass_UELEOSManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELEOSDebug_Statics::NewProp_ELEOSManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELEOSDebug_Statics::NewProp_ELEOSManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELEOSDebug_Statics::NewProp_ELEOSDebugUser_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELEOSDebug" },
		{ "ModuleRelativePath", "Public/ELEOSDebug.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELEOSDebug_Statics::NewProp_ELEOSDebugUser = { "ELEOSDebugUser", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELEOSDebug, ELEOSDebugUser), Z_Construct_UClass_AELEOSDebugUser_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELEOSDebug_Statics::NewProp_ELEOSDebugUser_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELEOSDebug_Statics::NewProp_ELEOSDebugUser_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELEOSDebug_Statics::NewProp_ELEOSDebugLobby_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELEOSDebug" },
		{ "ModuleRelativePath", "Public/ELEOSDebug.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELEOSDebug_Statics::NewProp_ELEOSDebugLobby = { "ELEOSDebugLobby", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELEOSDebug, ELEOSDebugLobby), Z_Construct_UClass_AELEOSDebugLobby_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELEOSDebug_Statics::NewProp_ELEOSDebugLobby_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELEOSDebug_Statics::NewProp_ELEOSDebugLobby_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELEOSDebug_Statics::NewProp_ELEOSDebugGameSession_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELEOSDebug" },
		{ "ModuleRelativePath", "Public/ELEOSDebug.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELEOSDebug_Statics::NewProp_ELEOSDebugGameSession = { "ELEOSDebugGameSession", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELEOSDebug, ELEOSDebugGameSession), Z_Construct_UClass_AELEOSDebugGameSession_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELEOSDebug_Statics::NewProp_ELEOSDebugGameSession_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELEOSDebug_Statics::NewProp_ELEOSDebugGameSession_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELEOSDebug_Statics::NewProp_ELEOSDebugFriend_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELEOSDebug" },
		{ "ModuleRelativePath", "Public/ELEOSDebug.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELEOSDebug_Statics::NewProp_ELEOSDebugFriend = { "ELEOSDebugFriend", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELEOSDebug, ELEOSDebugFriend), Z_Construct_UClass_AELEOSDebugFriend_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELEOSDebug_Statics::NewProp_ELEOSDebugFriend_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELEOSDebug_Statics::NewProp_ELEOSDebugFriend_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELEOSDebug_Statics::NewProp_ELEOSDebugCommon_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELEOSDebug" },
		{ "ModuleRelativePath", "Public/ELEOSDebug.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELEOSDebug_Statics::NewProp_ELEOSDebugCommon = { "ELEOSDebugCommon", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELEOSDebug, ELEOSDebugCommon), Z_Construct_UClass_AELEOSDebugCommon_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELEOSDebug_Statics::NewProp_ELEOSDebugCommon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELEOSDebug_Statics::NewProp_ELEOSDebugCommon_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UELEOSDebug_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELEOSDebug_Statics::NewProp_ELEOSManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELEOSDebug_Statics::NewProp_ELEOSDebugUser,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELEOSDebug_Statics::NewProp_ELEOSDebugLobby,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELEOSDebug_Statics::NewProp_ELEOSDebugGameSession,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELEOSDebug_Statics::NewProp_ELEOSDebugFriend,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELEOSDebug_Statics::NewProp_ELEOSDebugCommon,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELEOSDebug_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELEOSDebug>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELEOSDebug_Statics::ClassParams = {
		&UELEOSDebug::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UELEOSDebug_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UELEOSDebug_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELEOSDebug_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELEOSDebug_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELEOSDebug()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELEOSDebug_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELEOSDebug, 3293111628);
	template<> ABP_200508_API UClass* StaticClass<UELEOSDebug>()
	{
		return UELEOSDebug::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELEOSDebug(Z_Construct_UClass_UELEOSDebug, &UELEOSDebug::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELEOSDebug"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELEOSDebug);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
