// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yEOSSDK/Public/EOSSessionUser.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOSSessionUser() {}
// Cross Module References
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSSessionUser_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSSessionUser();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSCommunityUserBase();
	UPackage* Z_Construct_UPackage__Script_yEOSSDK();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSSessionP2PAFGameFlowData_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UEOSSessionUser::execGetGameFlow)
	{
		P_GET_OBJECT_REF(UEOSSessionP2PAFGameFlowData,Z_Param_Out__pcGameFlowData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetGameFlow(Z_Param_Out__pcGameFlowData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSessionUser::execIsRegisted)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsRegisted();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSessionUser::execResetGameFlow)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ResetGameFlow();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSessionUser::execSetupGameFlow)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetupGameFlow();
		P_NATIVE_END;
	}
	void UEOSSessionUser::StaticRegisterNativesUEOSSessionUser()
	{
		UClass* Class = UEOSSessionUser::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetGameFlow", &UEOSSessionUser::execGetGameFlow },
			{ "IsRegisted", &UEOSSessionUser::execIsRegisted },
			{ "ResetGameFlow", &UEOSSessionUser::execResetGameFlow },
			{ "SetupGameFlow", &UEOSSessionUser::execSetupGameFlow },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEOSSessionUser_GetGameFlow_Statics
	{
		struct EOSSessionUser_eventGetGameFlow_Parms
		{
			UEOSSessionP2PAFGameFlowData* _pcGameFlowData;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcGameFlowData;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSSessionUser_GetGameFlow_Statics::NewProp__pcGameFlowData = { "_pcGameFlowData", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionUser_eventGetGameFlow_Parms, _pcGameFlowData), Z_Construct_UClass_UEOSSessionP2PAFGameFlowData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSSessionUser_GetGameFlow_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSSessionUser_eventGetGameFlow_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSSessionUser_GetGameFlow_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSSessionUser_eventGetGameFlow_Parms), &Z_Construct_UFunction_UEOSSessionUser_GetGameFlow_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionUser_GetGameFlow_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionUser_GetGameFlow_Statics::NewProp__pcGameFlowData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionUser_GetGameFlow_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionUser_GetGameFlow_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionUser.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionUser_GetGameFlow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionUser, nullptr, "GetGameFlow", nullptr, nullptr, sizeof(EOSSessionUser_eventGetGameFlow_Parms), Z_Construct_UFunction_UEOSSessionUser_GetGameFlow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionUser_GetGameFlow_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionUser_GetGameFlow_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionUser_GetGameFlow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionUser_GetGameFlow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionUser_GetGameFlow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionUser_IsRegisted_Statics
	{
		struct EOSSessionUser_eventIsRegisted_Parms
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
	void Z_Construct_UFunction_UEOSSessionUser_IsRegisted_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSSessionUser_eventIsRegisted_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSSessionUser_IsRegisted_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSSessionUser_eventIsRegisted_Parms), &Z_Construct_UFunction_UEOSSessionUser_IsRegisted_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionUser_IsRegisted_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionUser_IsRegisted_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionUser_IsRegisted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionUser.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionUser_IsRegisted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionUser, nullptr, "IsRegisted", nullptr, nullptr, sizeof(EOSSessionUser_eventIsRegisted_Parms), Z_Construct_UFunction_UEOSSessionUser_IsRegisted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionUser_IsRegisted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionUser_IsRegisted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionUser_IsRegisted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionUser_IsRegisted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionUser_IsRegisted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionUser_ResetGameFlow_Statics
	{
		struct EOSSessionUser_eventResetGameFlow_Parms
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
	void Z_Construct_UFunction_UEOSSessionUser_ResetGameFlow_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSSessionUser_eventResetGameFlow_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSSessionUser_ResetGameFlow_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSSessionUser_eventResetGameFlow_Parms), &Z_Construct_UFunction_UEOSSessionUser_ResetGameFlow_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionUser_ResetGameFlow_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionUser_ResetGameFlow_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionUser_ResetGameFlow_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionUser.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionUser_ResetGameFlow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionUser, nullptr, "ResetGameFlow", nullptr, nullptr, sizeof(EOSSessionUser_eventResetGameFlow_Parms), Z_Construct_UFunction_UEOSSessionUser_ResetGameFlow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionUser_ResetGameFlow_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionUser_ResetGameFlow_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionUser_ResetGameFlow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionUser_ResetGameFlow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionUser_ResetGameFlow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionUser_SetupGameFlow_Statics
	{
		struct EOSSessionUser_eventSetupGameFlow_Parms
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
	void Z_Construct_UFunction_UEOSSessionUser_SetupGameFlow_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSSessionUser_eventSetupGameFlow_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSSessionUser_SetupGameFlow_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSSessionUser_eventSetupGameFlow_Parms), &Z_Construct_UFunction_UEOSSessionUser_SetupGameFlow_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionUser_SetupGameFlow_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionUser_SetupGameFlow_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionUser_SetupGameFlow_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionUser.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionUser_SetupGameFlow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionUser, nullptr, "SetupGameFlow", nullptr, nullptr, sizeof(EOSSessionUser_eventSetupGameFlow_Parms), Z_Construct_UFunction_UEOSSessionUser_SetupGameFlow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionUser_SetupGameFlow_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionUser_SetupGameFlow_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionUser_SetupGameFlow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionUser_SetupGameFlow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionUser_SetupGameFlow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEOSSessionUser_NoRegister()
	{
		return UEOSSessionUser::StaticClass();
	}
	struct Z_Construct_UClass_UEOSSessionUser_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_pcGameFlowData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_pcGameFlowData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEOSSessionUser_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEOSCommunityUserBase,
		(UObject* (*)())Z_Construct_UPackage__Script_yEOSSDK,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEOSSessionUser_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEOSSessionUser_GetGameFlow, "GetGameFlow" }, // 725553588
		{ &Z_Construct_UFunction_UEOSSessionUser_IsRegisted, "IsRegisted" }, // 2938776015
		{ &Z_Construct_UFunction_UEOSSessionUser_ResetGameFlow, "ResetGameFlow" }, // 112212415
		{ &Z_Construct_UFunction_UEOSSessionUser_SetupGameFlow, "SetupGameFlow" }, // 302830259
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSSessionUser_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "EOSSessionUser.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/EOSSessionUser.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSSessionUser_Statics::NewProp_m_pcGameFlowData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSSessionUser" },
		{ "ModuleRelativePath", "Public/EOSSessionUser.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEOSSessionUser_Statics::NewProp_m_pcGameFlowData = { "m_pcGameFlowData", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSSessionUser, m_pcGameFlowData), Z_Construct_UClass_UEOSSessionP2PAFGameFlowData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEOSSessionUser_Statics::NewProp_m_pcGameFlowData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSSessionUser_Statics::NewProp_m_pcGameFlowData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEOSSessionUser_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSSessionUser_Statics::NewProp_m_pcGameFlowData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEOSSessionUser_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEOSSessionUser>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEOSSessionUser_Statics::ClassParams = {
		&UEOSSessionUser::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UEOSSessionUser_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UEOSSessionUser_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEOSSessionUser_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSSessionUser_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEOSSessionUser()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEOSSessionUser_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEOSSessionUser, 2668667651);
	template<> YEOSSDK_API UClass* StaticClass<UEOSSessionUser>()
	{
		return UEOSSessionUser::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEOSSessionUser(Z_Construct_UClass_UEOSSessionUser, &UEOSSessionUser::StaticClass, TEXT("/Script/yEOSSDK"), TEXT("UEOSSessionUser"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEOSSessionUser);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
