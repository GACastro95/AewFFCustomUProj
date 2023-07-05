// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE_Core/Public/GameSingleton.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameSingleton() {}
// Cross Module References
	ELITE_CORE_API UClass* Z_Construct_UClass_UGameSingleton_NoRegister();
	ELITE_CORE_API UClass* Z_Construct_UClass_UGameSingleton();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ELITE_Core();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UGameSingleton::execCreateSingletonInstance)
	{
		P_GET_OBJECT_REF(UGameSingleton,Z_Param_Out_Instance);
		P_GET_PROPERTY(FStrProperty,Z_Param_BPPath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UGameSingleton::CreateSingletonInstance(Z_Param_Out_Instance,Z_Param_BPPath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameSingleton::execDeleteSingletonInstance)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_BPPath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UGameSingleton::DeleteSingletonInstance(Z_Param_BPPath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameSingleton::execGetSingletonInstance)
	{
		P_GET_OBJECT_REF(UGameSingleton,Z_Param_Out_Instance);
		P_GET_PROPERTY(FStrProperty,Z_Param_BPPath);
		P_GET_UBOOL(Z_Param_Create);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UGameSingleton::GetSingletonInstance(Z_Param_Out_Instance,Z_Param_BPPath,Z_Param_Create);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameSingleton::execGetWorldForBP)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UWorld**)Z_Param__Result=P_THIS->GetWorldForBP();
		P_NATIVE_END;
	}
	static FName NAME_UGameSingleton_OnInitialize = FName(TEXT("OnInitialize"));
	void UGameSingleton::OnInitialize()
	{
		ProcessEvent(FindFunctionChecked(NAME_UGameSingleton_OnInitialize),NULL);
	}
	static FName NAME_UGameSingleton_OnPostTick = FName(TEXT("OnPostTick"));
	void UGameSingleton::OnPostTick(float DeltaSeconds)
	{
		GameSingleton_eventOnPostTick_Parms Parms;
		Parms.DeltaSeconds=DeltaSeconds;
		ProcessEvent(FindFunctionChecked(NAME_UGameSingleton_OnPostTick),&Parms);
	}
	static FName NAME_UGameSingleton_OnPreTick = FName(TEXT("OnPreTick"));
	void UGameSingleton::OnPreTick(float DeltaSeconds)
	{
		GameSingleton_eventOnPreTick_Parms Parms;
		Parms.DeltaSeconds=DeltaSeconds;
		ProcessEvent(FindFunctionChecked(NAME_UGameSingleton_OnPreTick),&Parms);
	}
	static FName NAME_UGameSingleton_OnTick = FName(TEXT("OnTick"));
	void UGameSingleton::OnTick(float DeltaSeconds)
	{
		GameSingleton_eventOnTick_Parms Parms;
		Parms.DeltaSeconds=DeltaSeconds;
		ProcessEvent(FindFunctionChecked(NAME_UGameSingleton_OnTick),&Parms);
	}
	void UGameSingleton::StaticRegisterNativesUGameSingleton()
	{
		UClass* Class = UGameSingleton::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateSingletonInstance", &UGameSingleton::execCreateSingletonInstance },
			{ "DeleteSingletonInstance", &UGameSingleton::execDeleteSingletonInstance },
			{ "GetSingletonInstance", &UGameSingleton::execGetSingletonInstance },
			{ "GetWorldForBP", &UGameSingleton::execGetWorldForBP },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGameSingleton_CreateSingletonInstance_Statics
	{
		struct GameSingleton_eventCreateSingletonInstance_Parms
		{
			UGameSingleton* Instance;
			FString BPPath;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Instance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BPPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_BPPath;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameSingleton_CreateSingletonInstance_Statics::NewProp_Instance = { "Instance", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameSingleton_eventCreateSingletonInstance_Parms, Instance), Z_Construct_UClass_UGameSingleton_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameSingleton_CreateSingletonInstance_Statics::NewProp_BPPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameSingleton_CreateSingletonInstance_Statics::NewProp_BPPath = { "BPPath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameSingleton_eventCreateSingletonInstance_Parms, BPPath), METADATA_PARAMS(Z_Construct_UFunction_UGameSingleton_CreateSingletonInstance_Statics::NewProp_BPPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameSingleton_CreateSingletonInstance_Statics::NewProp_BPPath_MetaData)) };
	void Z_Construct_UFunction_UGameSingleton_CreateSingletonInstance_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GameSingleton_eventCreateSingletonInstance_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameSingleton_CreateSingletonInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GameSingleton_eventCreateSingletonInstance_Parms), &Z_Construct_UFunction_UGameSingleton_CreateSingletonInstance_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameSingleton_CreateSingletonInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameSingleton_CreateSingletonInstance_Statics::NewProp_Instance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameSingleton_CreateSingletonInstance_Statics::NewProp_BPPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameSingleton_CreateSingletonInstance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameSingleton_CreateSingletonInstance_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameSingleton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameSingleton_CreateSingletonInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameSingleton, nullptr, "CreateSingletonInstance", nullptr, nullptr, sizeof(GameSingleton_eventCreateSingletonInstance_Parms), Z_Construct_UFunction_UGameSingleton_CreateSingletonInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameSingleton_CreateSingletonInstance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameSingleton_CreateSingletonInstance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameSingleton_CreateSingletonInstance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameSingleton_CreateSingletonInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameSingleton_CreateSingletonInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameSingleton_DeleteSingletonInstance_Statics
	{
		struct GameSingleton_eventDeleteSingletonInstance_Parms
		{
			FString BPPath;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BPPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_BPPath;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameSingleton_DeleteSingletonInstance_Statics::NewProp_BPPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameSingleton_DeleteSingletonInstance_Statics::NewProp_BPPath = { "BPPath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameSingleton_eventDeleteSingletonInstance_Parms, BPPath), METADATA_PARAMS(Z_Construct_UFunction_UGameSingleton_DeleteSingletonInstance_Statics::NewProp_BPPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameSingleton_DeleteSingletonInstance_Statics::NewProp_BPPath_MetaData)) };
	void Z_Construct_UFunction_UGameSingleton_DeleteSingletonInstance_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GameSingleton_eventDeleteSingletonInstance_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameSingleton_DeleteSingletonInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GameSingleton_eventDeleteSingletonInstance_Parms), &Z_Construct_UFunction_UGameSingleton_DeleteSingletonInstance_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameSingleton_DeleteSingletonInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameSingleton_DeleteSingletonInstance_Statics::NewProp_BPPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameSingleton_DeleteSingletonInstance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameSingleton_DeleteSingletonInstance_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameSingleton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameSingleton_DeleteSingletonInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameSingleton, nullptr, "DeleteSingletonInstance", nullptr, nullptr, sizeof(GameSingleton_eventDeleteSingletonInstance_Parms), Z_Construct_UFunction_UGameSingleton_DeleteSingletonInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameSingleton_DeleteSingletonInstance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameSingleton_DeleteSingletonInstance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameSingleton_DeleteSingletonInstance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameSingleton_DeleteSingletonInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameSingleton_DeleteSingletonInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameSingleton_GetSingletonInstance_Statics
	{
		struct GameSingleton_eventGetSingletonInstance_Parms
		{
			UGameSingleton* Instance;
			FString BPPath;
			bool Create;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Instance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BPPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_BPPath;
		static void NewProp_Create_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Create;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameSingleton_GetSingletonInstance_Statics::NewProp_Instance = { "Instance", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameSingleton_eventGetSingletonInstance_Parms, Instance), Z_Construct_UClass_UGameSingleton_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameSingleton_GetSingletonInstance_Statics::NewProp_BPPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameSingleton_GetSingletonInstance_Statics::NewProp_BPPath = { "BPPath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameSingleton_eventGetSingletonInstance_Parms, BPPath), METADATA_PARAMS(Z_Construct_UFunction_UGameSingleton_GetSingletonInstance_Statics::NewProp_BPPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameSingleton_GetSingletonInstance_Statics::NewProp_BPPath_MetaData)) };
	void Z_Construct_UFunction_UGameSingleton_GetSingletonInstance_Statics::NewProp_Create_SetBit(void* Obj)
	{
		((GameSingleton_eventGetSingletonInstance_Parms*)Obj)->Create = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameSingleton_GetSingletonInstance_Statics::NewProp_Create = { "Create", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GameSingleton_eventGetSingletonInstance_Parms), &Z_Construct_UFunction_UGameSingleton_GetSingletonInstance_Statics::NewProp_Create_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGameSingleton_GetSingletonInstance_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GameSingleton_eventGetSingletonInstance_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameSingleton_GetSingletonInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GameSingleton_eventGetSingletonInstance_Parms), &Z_Construct_UFunction_UGameSingleton_GetSingletonInstance_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameSingleton_GetSingletonInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameSingleton_GetSingletonInstance_Statics::NewProp_Instance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameSingleton_GetSingletonInstance_Statics::NewProp_BPPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameSingleton_GetSingletonInstance_Statics::NewProp_Create,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameSingleton_GetSingletonInstance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameSingleton_GetSingletonInstance_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameSingleton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameSingleton_GetSingletonInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameSingleton, nullptr, "GetSingletonInstance", nullptr, nullptr, sizeof(GameSingleton_eventGetSingletonInstance_Parms), Z_Construct_UFunction_UGameSingleton_GetSingletonInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameSingleton_GetSingletonInstance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameSingleton_GetSingletonInstance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameSingleton_GetSingletonInstance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameSingleton_GetSingletonInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameSingleton_GetSingletonInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameSingleton_GetWorldForBP_Statics
	{
		struct GameSingleton_eventGetWorldForBP_Parms
		{
			UWorld* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameSingleton_GetWorldForBP_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameSingleton_eventGetWorldForBP_Parms, ReturnValue), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameSingleton_GetWorldForBP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameSingleton_GetWorldForBP_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameSingleton_GetWorldForBP_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameSingleton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameSingleton_GetWorldForBP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameSingleton, nullptr, "GetWorldForBP", nullptr, nullptr, sizeof(GameSingleton_eventGetWorldForBP_Parms), Z_Construct_UFunction_UGameSingleton_GetWorldForBP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameSingleton_GetWorldForBP_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameSingleton_GetWorldForBP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameSingleton_GetWorldForBP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameSingleton_GetWorldForBP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameSingleton_GetWorldForBP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameSingleton_OnInitialize_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameSingleton_OnInitialize_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameSingleton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameSingleton_OnInitialize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameSingleton, nullptr, "OnInitialize", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameSingleton_OnInitialize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameSingleton_OnInitialize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameSingleton_OnInitialize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameSingleton_OnInitialize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameSingleton_OnPostTick_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaSeconds;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGameSingleton_OnPostTick_Statics::NewProp_DeltaSeconds = { "DeltaSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameSingleton_eventOnPostTick_Parms, DeltaSeconds), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameSingleton_OnPostTick_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameSingleton_OnPostTick_Statics::NewProp_DeltaSeconds,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameSingleton_OnPostTick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameSingleton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameSingleton_OnPostTick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameSingleton, nullptr, "OnPostTick", nullptr, nullptr, sizeof(GameSingleton_eventOnPostTick_Parms), Z_Construct_UFunction_UGameSingleton_OnPostTick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameSingleton_OnPostTick_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameSingleton_OnPostTick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameSingleton_OnPostTick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameSingleton_OnPostTick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameSingleton_OnPostTick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameSingleton_OnPreTick_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaSeconds;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGameSingleton_OnPreTick_Statics::NewProp_DeltaSeconds = { "DeltaSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameSingleton_eventOnPreTick_Parms, DeltaSeconds), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameSingleton_OnPreTick_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameSingleton_OnPreTick_Statics::NewProp_DeltaSeconds,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameSingleton_OnPreTick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameSingleton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameSingleton_OnPreTick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameSingleton, nullptr, "OnPreTick", nullptr, nullptr, sizeof(GameSingleton_eventOnPreTick_Parms), Z_Construct_UFunction_UGameSingleton_OnPreTick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameSingleton_OnPreTick_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameSingleton_OnPreTick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameSingleton_OnPreTick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameSingleton_OnPreTick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameSingleton_OnPreTick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameSingleton_OnTick_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaSeconds;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGameSingleton_OnTick_Statics::NewProp_DeltaSeconds = { "DeltaSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameSingleton_eventOnTick_Parms, DeltaSeconds), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameSingleton_OnTick_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameSingleton_OnTick_Statics::NewProp_DeltaSeconds,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameSingleton_OnTick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameSingleton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameSingleton_OnTick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameSingleton, nullptr, "OnTick", nullptr, nullptr, sizeof(GameSingleton_eventOnTick_Parms), Z_Construct_UFunction_UGameSingleton_OnTick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameSingleton_OnTick_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameSingleton_OnTick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameSingleton_OnTick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameSingleton_OnTick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameSingleton_OnTick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGameSingleton_NoRegister()
	{
		return UGameSingleton::StaticClass();
	}
	struct Z_Construct_UClass_UGameSingleton_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTickableWhenPaused_MetaData[];
#endif
		static void NewProp_bTickableWhenPaused_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTickableWhenPaused;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTickableInEditor_MetaData[];
#endif
		static void NewProp_bTickableInEditor_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTickableInEditor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameSingleton_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ELITE_Core,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGameSingleton_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGameSingleton_CreateSingletonInstance, "CreateSingletonInstance" }, // 220746496
		{ &Z_Construct_UFunction_UGameSingleton_DeleteSingletonInstance, "DeleteSingletonInstance" }, // 3708611168
		{ &Z_Construct_UFunction_UGameSingleton_GetSingletonInstance, "GetSingletonInstance" }, // 3093499209
		{ &Z_Construct_UFunction_UGameSingleton_GetWorldForBP, "GetWorldForBP" }, // 2276886247
		{ &Z_Construct_UFunction_UGameSingleton_OnInitialize, "OnInitialize" }, // 2127354988
		{ &Z_Construct_UFunction_UGameSingleton_OnPostTick, "OnPostTick" }, // 1664479626
		{ &Z_Construct_UFunction_UGameSingleton_OnPreTick, "OnPreTick" }, // 3159915554
		{ &Z_Construct_UFunction_UGameSingleton_OnTick, "OnTick" }, // 532714886
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameSingleton_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "GameSingleton.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/GameSingleton.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameSingleton_Statics::NewProp_bTickableWhenPaused_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GameSingleton" },
		{ "ModuleRelativePath", "Public/GameSingleton.h" },
	};
#endif
	void Z_Construct_UClass_UGameSingleton_Statics::NewProp_bTickableWhenPaused_SetBit(void* Obj)
	{
		((UGameSingleton*)Obj)->bTickableWhenPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGameSingleton_Statics::NewProp_bTickableWhenPaused = { "bTickableWhenPaused", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGameSingleton), &Z_Construct_UClass_UGameSingleton_Statics::NewProp_bTickableWhenPaused_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGameSingleton_Statics::NewProp_bTickableWhenPaused_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameSingleton_Statics::NewProp_bTickableWhenPaused_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameSingleton_Statics::NewProp_bTickableInEditor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GameSingleton" },
		{ "ModuleRelativePath", "Public/GameSingleton.h" },
	};
#endif
	void Z_Construct_UClass_UGameSingleton_Statics::NewProp_bTickableInEditor_SetBit(void* Obj)
	{
		((UGameSingleton*)Obj)->bTickableInEditor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGameSingleton_Statics::NewProp_bTickableInEditor = { "bTickableInEditor", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGameSingleton), &Z_Construct_UClass_UGameSingleton_Statics::NewProp_bTickableInEditor_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGameSingleton_Statics::NewProp_bTickableInEditor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameSingleton_Statics::NewProp_bTickableInEditor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameSingleton_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSingleton_Statics::NewProp_bTickableWhenPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSingleton_Statics::NewProp_bTickableInEditor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameSingleton_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameSingleton>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGameSingleton_Statics::ClassParams = {
		&UGameSingleton::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGameSingleton_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGameSingleton_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGameSingleton_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGameSingleton_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameSingleton()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGameSingleton_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGameSingleton, 747292967);
	template<> ELITE_CORE_API UClass* StaticClass<UGameSingleton>()
	{
		return UGameSingleton::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGameSingleton(Z_Construct_UClass_UGameSingleton, &UGameSingleton::StaticClass, TEXT("/Script/ELITE_Core"), TEXT("UGameSingleton"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameSingleton);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
