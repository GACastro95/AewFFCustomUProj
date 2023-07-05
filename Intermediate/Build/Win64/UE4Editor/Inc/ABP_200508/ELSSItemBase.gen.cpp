// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSItemBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSItemBase() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_AELSSItemBase_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_AELSSItemBase();
	ABP_200508_API UClass* Z_Construct_UClass_AELSSPickupBase();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UClass* Z_Construct_UClass_AELSSPlayer_NoRegister();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSItemParam();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSItemType();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	DEFINE_FUNCTION(AELSSItemBase::execAddStock)
	{
		P_GET_OBJECT(AELSSPlayer,Z_Param_OtherActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddStock(Z_Param_OtherActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSItemBase::execGetIsUsedItem)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetIsUsedItem();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSItemBase::execOnEndPerformAbsorbMovement)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnEndPerformAbsorbMovement();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSItemBase::execOnRep_AbsorbMoveTo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_AbsorbMoveTo();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSItemBase::execPerformAbsorbMovement)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PerformAbsorbMovement(Z_Param_DeltaTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSItemBase::execSetup)
	{
		P_GET_STRUCT_REF(FSSItemParam,Z_Param_Out_ItemParam);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Setup_Implementation(Z_Param_Out_ItemParam);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSItemBase::execStartAbsorbMovement)
	{
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartAbsorbMovement(Z_Param_OtherActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSItemBase::execUseItem)
	{
		P_GET_OBJECT(AELSSPlayer,Z_Param_OtherActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->UseItem(Z_Param_OtherActor);
		P_NATIVE_END;
	}
	static FName NAME_AELSSItemBase_Setup = FName(TEXT("Setup"));
	void AELSSItemBase::Setup(FSSItemParam const& ItemParam)
	{
		ELSSItemBase_eventSetup_Parms Parms;
		Parms.ItemParam=ItemParam;
		ProcessEvent(FindFunctionChecked(NAME_AELSSItemBase_Setup),&Parms);
	}
	void AELSSItemBase::StaticRegisterNativesAELSSItemBase()
	{
		UClass* Class = AELSSItemBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddStock", &AELSSItemBase::execAddStock },
			{ "GetIsUsedItem", &AELSSItemBase::execGetIsUsedItem },
			{ "OnEndPerformAbsorbMovement", &AELSSItemBase::execOnEndPerformAbsorbMovement },
			{ "OnRep_AbsorbMoveTo", &AELSSItemBase::execOnRep_AbsorbMoveTo },
			{ "PerformAbsorbMovement", &AELSSItemBase::execPerformAbsorbMovement },
			{ "Setup", &AELSSItemBase::execSetup },
			{ "StartAbsorbMovement", &AELSSItemBase::execStartAbsorbMovement },
			{ "UseItem", &AELSSItemBase::execUseItem },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AELSSItemBase_AddStock_Statics
	{
		struct ELSSItemBase_eventAddStock_Parms
		{
			AELSSPlayer* OtherActor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSItemBase_AddStock_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSItemBase_eventAddStock_Parms, OtherActor), Z_Construct_UClass_AELSSPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSItemBase_AddStock_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSItemBase_AddStock_Statics::NewProp_OtherActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSItemBase_AddStock_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSItemBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSItemBase_AddStock_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSItemBase, nullptr, "AddStock", nullptr, nullptr, sizeof(ELSSItemBase_eventAddStock_Parms), Z_Construct_UFunction_AELSSItemBase_AddStock_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSItemBase_AddStock_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSItemBase_AddStock_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSItemBase_AddStock_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSItemBase_AddStock()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSItemBase_AddStock_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSItemBase_GetIsUsedItem_Statics
	{
		struct ELSSItemBase_eventGetIsUsedItem_Parms
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
	void Z_Construct_UFunction_AELSSItemBase_GetIsUsedItem_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSItemBase_eventGetIsUsedItem_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSItemBase_GetIsUsedItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSItemBase_eventGetIsUsedItem_Parms), &Z_Construct_UFunction_AELSSItemBase_GetIsUsedItem_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSItemBase_GetIsUsedItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSItemBase_GetIsUsedItem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSItemBase_GetIsUsedItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSItemBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSItemBase_GetIsUsedItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSItemBase, nullptr, "GetIsUsedItem", nullptr, nullptr, sizeof(ELSSItemBase_eventGetIsUsedItem_Parms), Z_Construct_UFunction_AELSSItemBase_GetIsUsedItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSItemBase_GetIsUsedItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSItemBase_GetIsUsedItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSItemBase_GetIsUsedItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSItemBase_GetIsUsedItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSItemBase_GetIsUsedItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSItemBase_OnEndPerformAbsorbMovement_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSItemBase_OnEndPerformAbsorbMovement_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSItemBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSItemBase_OnEndPerformAbsorbMovement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSItemBase, nullptr, "OnEndPerformAbsorbMovement", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSItemBase_OnEndPerformAbsorbMovement_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSItemBase_OnEndPerformAbsorbMovement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSItemBase_OnEndPerformAbsorbMovement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSItemBase_OnEndPerformAbsorbMovement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSItemBase_OnRep_AbsorbMoveTo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSItemBase_OnRep_AbsorbMoveTo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSItemBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSItemBase_OnRep_AbsorbMoveTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSItemBase, nullptr, "OnRep_AbsorbMoveTo", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSItemBase_OnRep_AbsorbMoveTo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSItemBase_OnRep_AbsorbMoveTo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSItemBase_OnRep_AbsorbMoveTo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSItemBase_OnRep_AbsorbMoveTo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSItemBase_PerformAbsorbMovement_Statics
	{
		struct ELSSItemBase_eventPerformAbsorbMovement_Parms
		{
			float DeltaTime;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AELSSItemBase_PerformAbsorbMovement_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSItemBase_eventPerformAbsorbMovement_Parms, DeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSItemBase_PerformAbsorbMovement_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSItemBase_PerformAbsorbMovement_Statics::NewProp_DeltaTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSItemBase_PerformAbsorbMovement_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSItemBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSItemBase_PerformAbsorbMovement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSItemBase, nullptr, "PerformAbsorbMovement", nullptr, nullptr, sizeof(ELSSItemBase_eventPerformAbsorbMovement_Parms), Z_Construct_UFunction_AELSSItemBase_PerformAbsorbMovement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSItemBase_PerformAbsorbMovement_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSItemBase_PerformAbsorbMovement_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSItemBase_PerformAbsorbMovement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSItemBase_PerformAbsorbMovement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSItemBase_PerformAbsorbMovement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSItemBase_Setup_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ItemParam;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSItemBase_Setup_Statics::NewProp_ItemParam_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELSSItemBase_Setup_Statics::NewProp_ItemParam = { "ItemParam", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSItemBase_eventSetup_Parms, ItemParam), Z_Construct_UScriptStruct_FSSItemParam, METADATA_PARAMS(Z_Construct_UFunction_AELSSItemBase_Setup_Statics::NewProp_ItemParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSItemBase_Setup_Statics::NewProp_ItemParam_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSItemBase_Setup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSItemBase_Setup_Statics::NewProp_ItemParam,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSItemBase_Setup_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSItemBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSItemBase_Setup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSItemBase, nullptr, "Setup", nullptr, nullptr, sizeof(ELSSItemBase_eventSetup_Parms), Z_Construct_UFunction_AELSSItemBase_Setup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSItemBase_Setup_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSItemBase_Setup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSItemBase_Setup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSItemBase_Setup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSItemBase_Setup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSItemBase_StartAbsorbMovement_Statics
	{
		struct ELSSItemBase_eventStartAbsorbMovement_Parms
		{
			AActor* OtherActor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSItemBase_StartAbsorbMovement_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSItemBase_eventStartAbsorbMovement_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSItemBase_StartAbsorbMovement_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSItemBase_StartAbsorbMovement_Statics::NewProp_OtherActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSItemBase_StartAbsorbMovement_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSItemBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSItemBase_StartAbsorbMovement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSItemBase, nullptr, "StartAbsorbMovement", nullptr, nullptr, sizeof(ELSSItemBase_eventStartAbsorbMovement_Parms), Z_Construct_UFunction_AELSSItemBase_StartAbsorbMovement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSItemBase_StartAbsorbMovement_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSItemBase_StartAbsorbMovement_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSItemBase_StartAbsorbMovement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSItemBase_StartAbsorbMovement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSItemBase_StartAbsorbMovement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSItemBase_UseItem_Statics
	{
		struct ELSSItemBase_eventUseItem_Parms
		{
			AELSSPlayer* OtherActor;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSItemBase_UseItem_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSItemBase_eventUseItem_Parms, OtherActor), Z_Construct_UClass_AELSSPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AELSSItemBase_UseItem_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSItemBase_eventUseItem_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSItemBase_UseItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSItemBase_eventUseItem_Parms), &Z_Construct_UFunction_AELSSItemBase_UseItem_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSItemBase_UseItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSItemBase_UseItem_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSItemBase_UseItem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSItemBase_UseItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSItemBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSItemBase_UseItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSItemBase, nullptr, "UseItem", nullptr, nullptr, sizeof(ELSSItemBase_eventUseItem_Parms), Z_Construct_UFunction_AELSSItemBase_UseItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSItemBase_UseItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSItemBase_UseItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSItemBase_UseItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSItemBase_UseItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSItemBase_UseItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AELSSItemBase_NoRegister()
	{
		return AELSSItemBase::StaticClass();
	}
	struct Z_Construct_UClass_AELSSItemBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StaticMeshComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkeletalMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SkeletalMeshComponent;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ItemType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ItemType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsStock_MetaData[];
#endif
		static void NewProp_IsStock_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsStock;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultMeshScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DefaultMeshScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScaleWhenDrop_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ScaleWhenDrop;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsUsedItem_MetaData[];
#endif
		static void NewProp_IsUsedItem_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsUsedItem;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsEnableAbsorbMovement_MetaData[];
#endif
		static void NewProp_IsEnableAbsorbMovement_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsEnableAbsorbMovement;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsPerformAbsorbMovement_MetaData[];
#endif
		static void NewProp_IsPerformAbsorbMovement_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsPerformAbsorbMovement;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AbsorbMovementDelay_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AbsorbMovementDelay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AbsorbMovementDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AbsorbMovementDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AbsorbMovementTimer_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AbsorbMovementTimer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PickupStartLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PickupStartLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OriginalScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OriginalScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AbsorbMovementEndScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AbsorbMovementEndScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AbsorbMoveTo_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AbsorbMoveTo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AELSSItemBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AELSSPickupBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AELSSItemBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AELSSItemBase_AddStock, "AddStock" }, // 1600515731
		{ &Z_Construct_UFunction_AELSSItemBase_GetIsUsedItem, "GetIsUsedItem" }, // 2833998130
		{ &Z_Construct_UFunction_AELSSItemBase_OnEndPerformAbsorbMovement, "OnEndPerformAbsorbMovement" }, // 1487925112
		{ &Z_Construct_UFunction_AELSSItemBase_OnRep_AbsorbMoveTo, "OnRep_AbsorbMoveTo" }, // 304443222
		{ &Z_Construct_UFunction_AELSSItemBase_PerformAbsorbMovement, "PerformAbsorbMovement" }, // 3780966555
		{ &Z_Construct_UFunction_AELSSItemBase_Setup, "Setup" }, // 4095239695
		{ &Z_Construct_UFunction_AELSSItemBase_StartAbsorbMovement, "StartAbsorbMovement" }, // 2515485315
		{ &Z_Construct_UFunction_AELSSItemBase_UseItem, "UseItem" }, // 3425095146
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSItemBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELSSItemBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSSItemBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSItemBase_Statics::NewProp_StaticMeshComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSItemBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSItemBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSItemBase_Statics::NewProp_StaticMeshComponent = { "StaticMeshComponent", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSItemBase, StaticMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELSSItemBase_Statics::NewProp_StaticMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSItemBase_Statics::NewProp_StaticMeshComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSItemBase_Statics::NewProp_SkeletalMeshComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSItemBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSItemBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSItemBase_Statics::NewProp_SkeletalMeshComponent = { "SkeletalMeshComponent", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSItemBase, SkeletalMeshComponent), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELSSItemBase_Statics::NewProp_SkeletalMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSItemBase_Statics::NewProp_SkeletalMeshComponent_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AELSSItemBase_Statics::NewProp_ItemType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSItemBase_Statics::NewProp_ItemType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSItemBase" },
		{ "ModuleRelativePath", "Public/ELSSItemBase.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AELSSItemBase_Statics::NewProp_ItemType = { "ItemType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSItemBase, ItemType), Z_Construct_UEnum_ABP_200508_ESSItemType, METADATA_PARAMS(Z_Construct_UClass_AELSSItemBase_Statics::NewProp_ItemType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSItemBase_Statics::NewProp_ItemType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSItemBase_Statics::NewProp_IsStock_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSItemBase" },
		{ "ModuleRelativePath", "Public/ELSSItemBase.h" },
	};
#endif
	void Z_Construct_UClass_AELSSItemBase_Statics::NewProp_IsStock_SetBit(void* Obj)
	{
		((AELSSItemBase*)Obj)->IsStock = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AELSSItemBase_Statics::NewProp_IsStock = { "IsStock", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AELSSItemBase), &Z_Construct_UClass_AELSSItemBase_Statics::NewProp_IsStock_SetBit, METADATA_PARAMS(Z_Construct_UClass_AELSSItemBase_Statics::NewProp_IsStock_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSItemBase_Statics::NewProp_IsStock_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSItemBase_Statics::NewProp_DefaultMeshScale_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSItemBase" },
		{ "ModuleRelativePath", "Public/ELSSItemBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AELSSItemBase_Statics::NewProp_DefaultMeshScale = { "DefaultMeshScale", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSItemBase, DefaultMeshScale), METADATA_PARAMS(Z_Construct_UClass_AELSSItemBase_Statics::NewProp_DefaultMeshScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSItemBase_Statics::NewProp_DefaultMeshScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSItemBase_Statics::NewProp_ScaleWhenDrop_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSItemBase" },
		{ "ModuleRelativePath", "Public/ELSSItemBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AELSSItemBase_Statics::NewProp_ScaleWhenDrop = { "ScaleWhenDrop", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSItemBase, ScaleWhenDrop), METADATA_PARAMS(Z_Construct_UClass_AELSSItemBase_Statics::NewProp_ScaleWhenDrop_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSItemBase_Statics::NewProp_ScaleWhenDrop_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSItemBase_Statics::NewProp_IsUsedItem_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSItemBase" },
		{ "ModuleRelativePath", "Public/ELSSItemBase.h" },
	};
#endif
	void Z_Construct_UClass_AELSSItemBase_Statics::NewProp_IsUsedItem_SetBit(void* Obj)
	{
		((AELSSItemBase*)Obj)->IsUsedItem = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AELSSItemBase_Statics::NewProp_IsUsedItem = { "IsUsedItem", nullptr, (EPropertyFlags)0x0040000000000025, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(AELSSItemBase), &Z_Construct_UClass_AELSSItemBase_Statics::NewProp_IsUsedItem_SetBit, METADATA_PARAMS(Z_Construct_UClass_AELSSItemBase_Statics::NewProp_IsUsedItem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSItemBase_Statics::NewProp_IsUsedItem_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSItemBase_Statics::NewProp_IsEnableAbsorbMovement_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSItemBase" },
		{ "ModuleRelativePath", "Public/ELSSItemBase.h" },
	};
#endif
	void Z_Construct_UClass_AELSSItemBase_Statics::NewProp_IsEnableAbsorbMovement_SetBit(void* Obj)
	{
		((AELSSItemBase*)Obj)->IsEnableAbsorbMovement = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AELSSItemBase_Statics::NewProp_IsEnableAbsorbMovement = { "IsEnableAbsorbMovement", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AELSSItemBase), &Z_Construct_UClass_AELSSItemBase_Statics::NewProp_IsEnableAbsorbMovement_SetBit, METADATA_PARAMS(Z_Construct_UClass_AELSSItemBase_Statics::NewProp_IsEnableAbsorbMovement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSItemBase_Statics::NewProp_IsEnableAbsorbMovement_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSItemBase_Statics::NewProp_IsPerformAbsorbMovement_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSItemBase" },
		{ "ModuleRelativePath", "Public/ELSSItemBase.h" },
	};
#endif
	void Z_Construct_UClass_AELSSItemBase_Statics::NewProp_IsPerformAbsorbMovement_SetBit(void* Obj)
	{
		((AELSSItemBase*)Obj)->IsPerformAbsorbMovement = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AELSSItemBase_Statics::NewProp_IsPerformAbsorbMovement = { "IsPerformAbsorbMovement", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AELSSItemBase), &Z_Construct_UClass_AELSSItemBase_Statics::NewProp_IsPerformAbsorbMovement_SetBit, METADATA_PARAMS(Z_Construct_UClass_AELSSItemBase_Statics::NewProp_IsPerformAbsorbMovement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSItemBase_Statics::NewProp_IsPerformAbsorbMovement_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSItemBase_Statics::NewProp_AbsorbMovementDelay_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSItemBase" },
		{ "ModuleRelativePath", "Public/ELSSItemBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AELSSItemBase_Statics::NewProp_AbsorbMovementDelay = { "AbsorbMovementDelay", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSItemBase, AbsorbMovementDelay), METADATA_PARAMS(Z_Construct_UClass_AELSSItemBase_Statics::NewProp_AbsorbMovementDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSItemBase_Statics::NewProp_AbsorbMovementDelay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSItemBase_Statics::NewProp_AbsorbMovementDuration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSItemBase" },
		{ "ModuleRelativePath", "Public/ELSSItemBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AELSSItemBase_Statics::NewProp_AbsorbMovementDuration = { "AbsorbMovementDuration", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSItemBase, AbsorbMovementDuration), METADATA_PARAMS(Z_Construct_UClass_AELSSItemBase_Statics::NewProp_AbsorbMovementDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSItemBase_Statics::NewProp_AbsorbMovementDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSItemBase_Statics::NewProp_AbsorbMovementTimer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSItemBase" },
		{ "ModuleRelativePath", "Public/ELSSItemBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AELSSItemBase_Statics::NewProp_AbsorbMovementTimer = { "AbsorbMovementTimer", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSItemBase, AbsorbMovementTimer), METADATA_PARAMS(Z_Construct_UClass_AELSSItemBase_Statics::NewProp_AbsorbMovementTimer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSItemBase_Statics::NewProp_AbsorbMovementTimer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSItemBase_Statics::NewProp_PickupStartLocation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSItemBase" },
		{ "ModuleRelativePath", "Public/ELSSItemBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AELSSItemBase_Statics::NewProp_PickupStartLocation = { "PickupStartLocation", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSItemBase, PickupStartLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AELSSItemBase_Statics::NewProp_PickupStartLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSItemBase_Statics::NewProp_PickupStartLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSItemBase_Statics::NewProp_OriginalScale_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSItemBase" },
		{ "ModuleRelativePath", "Public/ELSSItemBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AELSSItemBase_Statics::NewProp_OriginalScale = { "OriginalScale", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSItemBase, OriginalScale), METADATA_PARAMS(Z_Construct_UClass_AELSSItemBase_Statics::NewProp_OriginalScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSItemBase_Statics::NewProp_OriginalScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSItemBase_Statics::NewProp_AbsorbMovementEndScale_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSItemBase" },
		{ "ModuleRelativePath", "Public/ELSSItemBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AELSSItemBase_Statics::NewProp_AbsorbMovementEndScale = { "AbsorbMovementEndScale", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSItemBase, AbsorbMovementEndScale), METADATA_PARAMS(Z_Construct_UClass_AELSSItemBase_Statics::NewProp_AbsorbMovementEndScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSItemBase_Statics::NewProp_AbsorbMovementEndScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSItemBase_Statics::NewProp_AbsorbMoveTo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSItemBase" },
		{ "ModuleRelativePath", "Public/ELSSItemBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSItemBase_Statics::NewProp_AbsorbMoveTo = { "AbsorbMoveTo", "OnRep_AbsorbMoveTo", (EPropertyFlags)0x0040000100000025, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSItemBase, AbsorbMoveTo), Z_Construct_UClass_AELSSPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELSSItemBase_Statics::NewProp_AbsorbMoveTo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSItemBase_Statics::NewProp_AbsorbMoveTo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AELSSItemBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSItemBase_Statics::NewProp_StaticMeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSItemBase_Statics::NewProp_SkeletalMeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSItemBase_Statics::NewProp_ItemType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSItemBase_Statics::NewProp_ItemType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSItemBase_Statics::NewProp_IsStock,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSItemBase_Statics::NewProp_DefaultMeshScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSItemBase_Statics::NewProp_ScaleWhenDrop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSItemBase_Statics::NewProp_IsUsedItem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSItemBase_Statics::NewProp_IsEnableAbsorbMovement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSItemBase_Statics::NewProp_IsPerformAbsorbMovement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSItemBase_Statics::NewProp_AbsorbMovementDelay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSItemBase_Statics::NewProp_AbsorbMovementDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSItemBase_Statics::NewProp_AbsorbMovementTimer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSItemBase_Statics::NewProp_PickupStartLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSItemBase_Statics::NewProp_OriginalScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSItemBase_Statics::NewProp_AbsorbMovementEndScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSItemBase_Statics::NewProp_AbsorbMoveTo,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AELSSItemBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AELSSItemBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AELSSItemBase_Statics::ClassParams = {
		&AELSSItemBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AELSSItemBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AELSSItemBase_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AELSSItemBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSItemBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AELSSItemBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AELSSItemBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AELSSItemBase, 3938186120);
	template<> ABP_200508_API UClass* StaticClass<AELSSItemBase>()
	{
		return AELSSItemBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AELSSItemBase(Z_Construct_UClass_AELSSItemBase, &AELSSItemBase::StaticClass, TEXT("/Script/ABP_200508"), TEXT("AELSSItemBase"), false, nullptr, nullptr, nullptr);

	void AELSSItemBase::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_IsUsedItem(TEXT("IsUsedItem"));
		static const FName Name_AbsorbMoveTo(TEXT("AbsorbMoveTo"));

		const bool bIsValid = true
			&& Name_IsUsedItem == ClassReps[(int32)ENetFields_Private::IsUsedItem].Property->GetFName()
			&& Name_AbsorbMoveTo == ClassReps[(int32)ENetFields_Private::AbsorbMoveTo].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AELSSItemBase"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AELSSItemBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
