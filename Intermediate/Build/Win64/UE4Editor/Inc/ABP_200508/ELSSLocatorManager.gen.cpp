// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSLocatorManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSLocatorManager() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_AELSSLocatorManager_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_AELSSLocatorManager();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSLocatorType();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ABP_200508_API UClass* Z_Construct_UClass_AELSSLocator_NoRegister();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSPlayerStartLocatorType();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSManagerActorInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AELSSLocatorManager::execGetLocatorListFromNear)
	{
		P_GET_ENUM(ESSLocatorType,Z_Param_InType);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_inOrigin);
		P_GET_PROPERTY(FFloatProperty,Z_Param_inDistance);
		P_GET_PROPERTY(FIntProperty,Z_Param_inMaxNum);
		P_GET_UBOOL(Z_Param_InUseFiltering);
		P_GET_PROPERTY(FIntProperty,Z_Param_inFilterID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<AELSSLocator*>*)Z_Param__Result=P_THIS->GetLocatorListFromNear(ESSLocatorType(Z_Param_InType),Z_Param_Out_inOrigin,Z_Param_inDistance,Z_Param_inMaxNum,Z_Param_InUseFiltering,Z_Param_inFilterID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSLocatorManager::execGetLocatorListWithFiltering)
	{
		P_GET_ENUM(ESSLocatorType,Z_Param_InType);
		P_GET_UBOOL(Z_Param_InUseFiltering);
		P_GET_PROPERTY(FIntProperty,Z_Param_inFilterID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<AELSSLocator*>*)Z_Param__Result=P_THIS->GetLocatorListWithFiltering(ESSLocatorType(Z_Param_InType),Z_Param_InUseFiltering,Z_Param_inFilterID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSLocatorManager::execGetPlayerStartLocatorList)
	{
		P_GET_ENUM(ESSPlayerStartLocatorType,Z_Param_StartType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<AELSSLocator*>*)Z_Param__Result=P_THIS->GetPlayerStartLocatorList(ESSPlayerStartLocatorType(Z_Param_StartType));
		P_NATIVE_END;
	}
	void AELSSLocatorManager::StaticRegisterNativesAELSSLocatorManager()
	{
		UClass* Class = AELSSLocatorManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetLocatorListFromNear", &AELSSLocatorManager::execGetLocatorListFromNear },
			{ "GetLocatorListWithFiltering", &AELSSLocatorManager::execGetLocatorListWithFiltering },
			{ "GetPlayerStartLocatorList", &AELSSLocatorManager::execGetPlayerStartLocatorList },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AELSSLocatorManager_GetLocatorListFromNear_Statics
	{
		struct ELSSLocatorManager_eventGetLocatorListFromNear_Parms
		{
			ESSLocatorType InType;
			FVector inOrigin;
			float inDistance;
			int32 inMaxNum;
			bool InUseFiltering;
			int32 inFilterID;
			TArray<AELSSLocator*> ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_inOrigin_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_inOrigin;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_inDistance;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inMaxNum;
		static void NewProp_InUseFiltering_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InUseFiltering;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inFilterID;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELSSLocatorManager_GetLocatorListFromNear_Statics::NewProp_InType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELSSLocatorManager_GetLocatorListFromNear_Statics::NewProp_InType = { "InType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSLocatorManager_eventGetLocatorListFromNear_Parms, InType), Z_Construct_UEnum_ABP_200508_ESSLocatorType, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSLocatorManager_GetLocatorListFromNear_Statics::NewProp_inOrigin_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELSSLocatorManager_GetLocatorListFromNear_Statics::NewProp_inOrigin = { "inOrigin", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSLocatorManager_eventGetLocatorListFromNear_Parms, inOrigin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_AELSSLocatorManager_GetLocatorListFromNear_Statics::NewProp_inOrigin_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSLocatorManager_GetLocatorListFromNear_Statics::NewProp_inOrigin_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AELSSLocatorManager_GetLocatorListFromNear_Statics::NewProp_inDistance = { "inDistance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSLocatorManager_eventGetLocatorListFromNear_Parms, inDistance), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSLocatorManager_GetLocatorListFromNear_Statics::NewProp_inMaxNum = { "inMaxNum", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSLocatorManager_eventGetLocatorListFromNear_Parms, inMaxNum), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AELSSLocatorManager_GetLocatorListFromNear_Statics::NewProp_InUseFiltering_SetBit(void* Obj)
	{
		((ELSSLocatorManager_eventGetLocatorListFromNear_Parms*)Obj)->InUseFiltering = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSLocatorManager_GetLocatorListFromNear_Statics::NewProp_InUseFiltering = { "InUseFiltering", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSLocatorManager_eventGetLocatorListFromNear_Parms), &Z_Construct_UFunction_AELSSLocatorManager_GetLocatorListFromNear_Statics::NewProp_InUseFiltering_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSLocatorManager_GetLocatorListFromNear_Statics::NewProp_inFilterID = { "inFilterID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSLocatorManager_eventGetLocatorListFromNear_Parms, inFilterID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSLocatorManager_GetLocatorListFromNear_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AELSSLocator_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AELSSLocatorManager_GetLocatorListFromNear_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSLocatorManager_eventGetLocatorListFromNear_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSLocatorManager_GetLocatorListFromNear_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSLocatorManager_GetLocatorListFromNear_Statics::NewProp_InType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSLocatorManager_GetLocatorListFromNear_Statics::NewProp_InType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSLocatorManager_GetLocatorListFromNear_Statics::NewProp_inOrigin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSLocatorManager_GetLocatorListFromNear_Statics::NewProp_inDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSLocatorManager_GetLocatorListFromNear_Statics::NewProp_inMaxNum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSLocatorManager_GetLocatorListFromNear_Statics::NewProp_InUseFiltering,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSLocatorManager_GetLocatorListFromNear_Statics::NewProp_inFilterID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSLocatorManager_GetLocatorListFromNear_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSLocatorManager_GetLocatorListFromNear_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSLocatorManager_GetLocatorListFromNear_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSLocatorManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSLocatorManager_GetLocatorListFromNear_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSLocatorManager, nullptr, "GetLocatorListFromNear", nullptr, nullptr, sizeof(ELSSLocatorManager_eventGetLocatorListFromNear_Parms), Z_Construct_UFunction_AELSSLocatorManager_GetLocatorListFromNear_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSLocatorManager_GetLocatorListFromNear_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSLocatorManager_GetLocatorListFromNear_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSLocatorManager_GetLocatorListFromNear_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSLocatorManager_GetLocatorListFromNear()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSLocatorManager_GetLocatorListFromNear_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSLocatorManager_GetLocatorListWithFiltering_Statics
	{
		struct ELSSLocatorManager_eventGetLocatorListWithFiltering_Parms
		{
			ESSLocatorType InType;
			bool InUseFiltering;
			int32 inFilterID;
			TArray<AELSSLocator*> ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InType;
		static void NewProp_InUseFiltering_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InUseFiltering;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inFilterID;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELSSLocatorManager_GetLocatorListWithFiltering_Statics::NewProp_InType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELSSLocatorManager_GetLocatorListWithFiltering_Statics::NewProp_InType = { "InType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSLocatorManager_eventGetLocatorListWithFiltering_Parms, InType), Z_Construct_UEnum_ABP_200508_ESSLocatorType, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AELSSLocatorManager_GetLocatorListWithFiltering_Statics::NewProp_InUseFiltering_SetBit(void* Obj)
	{
		((ELSSLocatorManager_eventGetLocatorListWithFiltering_Parms*)Obj)->InUseFiltering = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSLocatorManager_GetLocatorListWithFiltering_Statics::NewProp_InUseFiltering = { "InUseFiltering", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSLocatorManager_eventGetLocatorListWithFiltering_Parms), &Z_Construct_UFunction_AELSSLocatorManager_GetLocatorListWithFiltering_Statics::NewProp_InUseFiltering_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSLocatorManager_GetLocatorListWithFiltering_Statics::NewProp_inFilterID = { "inFilterID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSLocatorManager_eventGetLocatorListWithFiltering_Parms, inFilterID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSLocatorManager_GetLocatorListWithFiltering_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AELSSLocator_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AELSSLocatorManager_GetLocatorListWithFiltering_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSLocatorManager_eventGetLocatorListWithFiltering_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSLocatorManager_GetLocatorListWithFiltering_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSLocatorManager_GetLocatorListWithFiltering_Statics::NewProp_InType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSLocatorManager_GetLocatorListWithFiltering_Statics::NewProp_InType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSLocatorManager_GetLocatorListWithFiltering_Statics::NewProp_InUseFiltering,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSLocatorManager_GetLocatorListWithFiltering_Statics::NewProp_inFilterID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSLocatorManager_GetLocatorListWithFiltering_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSLocatorManager_GetLocatorListWithFiltering_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSLocatorManager_GetLocatorListWithFiltering_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSLocatorManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSLocatorManager_GetLocatorListWithFiltering_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSLocatorManager, nullptr, "GetLocatorListWithFiltering", nullptr, nullptr, sizeof(ELSSLocatorManager_eventGetLocatorListWithFiltering_Parms), Z_Construct_UFunction_AELSSLocatorManager_GetLocatorListWithFiltering_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSLocatorManager_GetLocatorListWithFiltering_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSLocatorManager_GetLocatorListWithFiltering_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSLocatorManager_GetLocatorListWithFiltering_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSLocatorManager_GetLocatorListWithFiltering()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSLocatorManager_GetLocatorListWithFiltering_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSLocatorManager_GetPlayerStartLocatorList_Statics
	{
		struct ELSSLocatorManager_eventGetPlayerStartLocatorList_Parms
		{
			ESSPlayerStartLocatorType StartType;
			TArray<AELSSLocator*> ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_StartType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_StartType;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELSSLocatorManager_GetPlayerStartLocatorList_Statics::NewProp_StartType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELSSLocatorManager_GetPlayerStartLocatorList_Statics::NewProp_StartType = { "StartType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSLocatorManager_eventGetPlayerStartLocatorList_Parms, StartType), Z_Construct_UEnum_ABP_200508_ESSPlayerStartLocatorType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSLocatorManager_GetPlayerStartLocatorList_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AELSSLocator_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AELSSLocatorManager_GetPlayerStartLocatorList_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSLocatorManager_eventGetPlayerStartLocatorList_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSLocatorManager_GetPlayerStartLocatorList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSLocatorManager_GetPlayerStartLocatorList_Statics::NewProp_StartType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSLocatorManager_GetPlayerStartLocatorList_Statics::NewProp_StartType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSLocatorManager_GetPlayerStartLocatorList_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSLocatorManager_GetPlayerStartLocatorList_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSLocatorManager_GetPlayerStartLocatorList_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSLocatorManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSLocatorManager_GetPlayerStartLocatorList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSLocatorManager, nullptr, "GetPlayerStartLocatorList", nullptr, nullptr, sizeof(ELSSLocatorManager_eventGetPlayerStartLocatorList_Parms), Z_Construct_UFunction_AELSSLocatorManager_GetPlayerStartLocatorList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSLocatorManager_GetPlayerStartLocatorList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSLocatorManager_GetPlayerStartLocatorList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSLocatorManager_GetPlayerStartLocatorList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSLocatorManager_GetPlayerStartLocatorList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSLocatorManager_GetPlayerStartLocatorList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AELSSLocatorManager_NoRegister()
	{
		return AELSSLocatorManager::StaticClass();
	}
	struct Z_Construct_UClass_AELSSLocatorManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LocatorList_Default_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocatorList_Default_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LocatorList_Default;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LocatorList_ItemBox_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocatorList_ItemBox_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LocatorList_ItemBox;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LocatorList_PlayerStart_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocatorList_PlayerStart_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LocatorList_PlayerStart;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AELSSLocatorManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AELSSLocatorManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AELSSLocatorManager_GetLocatorListFromNear, "GetLocatorListFromNear" }, // 2718916212
		{ &Z_Construct_UFunction_AELSSLocatorManager_GetLocatorListWithFiltering, "GetLocatorListWithFiltering" }, // 2213112153
		{ &Z_Construct_UFunction_AELSSLocatorManager_GetPlayerStartLocatorList, "GetPlayerStartLocatorList" }, // 792636449
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSLocatorManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELSSLocatorManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSSLocatorManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSLocatorManager_Statics::NewProp_LocatorList_Default_Inner = { "LocatorList_Default", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AELSSLocator_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSLocatorManager_Statics::NewProp_LocatorList_Default_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSLocatorManager" },
		{ "ModuleRelativePath", "Public/ELSSLocatorManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AELSSLocatorManager_Statics::NewProp_LocatorList_Default = { "LocatorList_Default", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSLocatorManager, LocatorList_Default), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AELSSLocatorManager_Statics::NewProp_LocatorList_Default_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSLocatorManager_Statics::NewProp_LocatorList_Default_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSLocatorManager_Statics::NewProp_LocatorList_ItemBox_Inner = { "LocatorList_ItemBox", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AELSSLocator_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSLocatorManager_Statics::NewProp_LocatorList_ItemBox_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSLocatorManager" },
		{ "ModuleRelativePath", "Public/ELSSLocatorManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AELSSLocatorManager_Statics::NewProp_LocatorList_ItemBox = { "LocatorList_ItemBox", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSLocatorManager, LocatorList_ItemBox), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AELSSLocatorManager_Statics::NewProp_LocatorList_ItemBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSLocatorManager_Statics::NewProp_LocatorList_ItemBox_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSLocatorManager_Statics::NewProp_LocatorList_PlayerStart_Inner = { "LocatorList_PlayerStart", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AELSSLocator_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSLocatorManager_Statics::NewProp_LocatorList_PlayerStart_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSLocatorManager" },
		{ "ModuleRelativePath", "Public/ELSSLocatorManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AELSSLocatorManager_Statics::NewProp_LocatorList_PlayerStart = { "LocatorList_PlayerStart", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSLocatorManager, LocatorList_PlayerStart), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AELSSLocatorManager_Statics::NewProp_LocatorList_PlayerStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSLocatorManager_Statics::NewProp_LocatorList_PlayerStart_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AELSSLocatorManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSLocatorManager_Statics::NewProp_LocatorList_Default_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSLocatorManager_Statics::NewProp_LocatorList_Default,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSLocatorManager_Statics::NewProp_LocatorList_ItemBox_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSLocatorManager_Statics::NewProp_LocatorList_ItemBox,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSLocatorManager_Statics::NewProp_LocatorList_PlayerStart_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSLocatorManager_Statics::NewProp_LocatorList_PlayerStart,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AELSSLocatorManager_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UELSSManagerActorInterface_NoRegister, (int32)VTABLE_OFFSET(AELSSLocatorManager, IELSSManagerActorInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AELSSLocatorManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AELSSLocatorManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AELSSLocatorManager_Statics::ClassParams = {
		&AELSSLocatorManager::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AELSSLocatorManager_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AELSSLocatorManager_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AELSSLocatorManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSLocatorManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AELSSLocatorManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AELSSLocatorManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AELSSLocatorManager, 3789246426);
	template<> ABP_200508_API UClass* StaticClass<AELSSLocatorManager>()
	{
		return AELSSLocatorManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AELSSLocatorManager(Z_Construct_UClass_AELSSLocatorManager, &AELSSLocatorManager::StaticClass, TEXT("/Script/ABP_200508"), TEXT("AELSSLocatorManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AELSSLocatorManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
