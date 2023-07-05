// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE/Public/EditHomeTownComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEditHomeTownComponent() {}
// Cross Module References
	ELITE_API UClass* Z_Construct_UClass_UEditHomeTownComponent_NoRegister();
	ELITE_API UClass* Z_Construct_UClass_UEditHomeTownComponent();
	CREATION_API UClass* Z_Construct_UClass_UMyWrestlerDataEditComponent();
	UPackage* Z_Construct_UPackage__Script_ELITE();
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FHomeTown();
	ABP_200508_API UClass* Z_Construct_UClass_UMyWrestlerDataObject_NoRegister();
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FHomeTownID();
// End Cross Module References
	DEFINE_FUNCTION(UEditHomeTownComponent::execGetHomeTownList)
	{
		P_GET_TARRAY_REF(FHomeTown,Z_Param_Out_List);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Index);
		P_GET_PROPERTY(FIntProperty,Z_Param_CurrentHomeTownID);
		P_GET_UBOOL(Z_Param_bOutputCountry);
		P_GET_UBOOL(Z_Param_bOutputState);
		P_GET_UBOOL(Z_Param_bOutputCity);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetHomeTownList(Z_Param_Out_List,Z_Param_Out_Index,Z_Param_CurrentHomeTownID,Z_Param_bOutputCountry,Z_Param_bOutputState,Z_Param_bOutputCity);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditHomeTownComponent::execSetHomeTown)
	{
		P_GET_OBJECT(UMyWrestlerDataObject,Z_Param_Target);
		P_GET_STRUCT_REF(FHomeTownID,Z_Param_Out_NewHomeTown);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetHomeTown(Z_Param_Target,Z_Param_Out_NewHomeTown);
		P_NATIVE_END;
	}
	void UEditHomeTownComponent::StaticRegisterNativesUEditHomeTownComponent()
	{
		UClass* Class = UEditHomeTownComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetHomeTownList", &UEditHomeTownComponent::execGetHomeTownList },
			{ "SetHomeTown", &UEditHomeTownComponent::execSetHomeTown },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEditHomeTownComponent_GetHomeTownList_Statics
	{
		struct EditHomeTownComponent_eventGetHomeTownList_Parms
		{
			TArray<FHomeTown> List;
			int32 Index;
			int32 CurrentHomeTownID;
			bool bOutputCountry;
			bool bOutputState;
			bool bOutputCity;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_List_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_List;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentHomeTownID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CurrentHomeTownID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOutputCountry_MetaData[];
#endif
		static void NewProp_bOutputCountry_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOutputCountry;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOutputState_MetaData[];
#endif
		static void NewProp_bOutputState_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOutputState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOutputCity_MetaData[];
#endif
		static void NewProp_bOutputCity_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOutputCity;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditHomeTownComponent_GetHomeTownList_Statics::NewProp_List_Inner = { "List", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FHomeTown, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEditHomeTownComponent_GetHomeTownList_Statics::NewProp_List = { "List", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditHomeTownComponent_eventGetHomeTownList_Parms, List), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEditHomeTownComponent_GetHomeTownList_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditHomeTownComponent_eventGetHomeTownList_Parms, Index), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditHomeTownComponent_GetHomeTownList_Statics::NewProp_CurrentHomeTownID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEditHomeTownComponent_GetHomeTownList_Statics::NewProp_CurrentHomeTownID = { "CurrentHomeTownID", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditHomeTownComponent_eventGetHomeTownList_Parms, CurrentHomeTownID), METADATA_PARAMS(Z_Construct_UFunction_UEditHomeTownComponent_GetHomeTownList_Statics::NewProp_CurrentHomeTownID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditHomeTownComponent_GetHomeTownList_Statics::NewProp_CurrentHomeTownID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditHomeTownComponent_GetHomeTownList_Statics::NewProp_bOutputCountry_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UEditHomeTownComponent_GetHomeTownList_Statics::NewProp_bOutputCountry_SetBit(void* Obj)
	{
		((EditHomeTownComponent_eventGetHomeTownList_Parms*)Obj)->bOutputCountry = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditHomeTownComponent_GetHomeTownList_Statics::NewProp_bOutputCountry = { "bOutputCountry", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EditHomeTownComponent_eventGetHomeTownList_Parms), &Z_Construct_UFunction_UEditHomeTownComponent_GetHomeTownList_Statics::NewProp_bOutputCountry_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UEditHomeTownComponent_GetHomeTownList_Statics::NewProp_bOutputCountry_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditHomeTownComponent_GetHomeTownList_Statics::NewProp_bOutputCountry_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditHomeTownComponent_GetHomeTownList_Statics::NewProp_bOutputState_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UEditHomeTownComponent_GetHomeTownList_Statics::NewProp_bOutputState_SetBit(void* Obj)
	{
		((EditHomeTownComponent_eventGetHomeTownList_Parms*)Obj)->bOutputState = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditHomeTownComponent_GetHomeTownList_Statics::NewProp_bOutputState = { "bOutputState", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EditHomeTownComponent_eventGetHomeTownList_Parms), &Z_Construct_UFunction_UEditHomeTownComponent_GetHomeTownList_Statics::NewProp_bOutputState_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UEditHomeTownComponent_GetHomeTownList_Statics::NewProp_bOutputState_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditHomeTownComponent_GetHomeTownList_Statics::NewProp_bOutputState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditHomeTownComponent_GetHomeTownList_Statics::NewProp_bOutputCity_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UEditHomeTownComponent_GetHomeTownList_Statics::NewProp_bOutputCity_SetBit(void* Obj)
	{
		((EditHomeTownComponent_eventGetHomeTownList_Parms*)Obj)->bOutputCity = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditHomeTownComponent_GetHomeTownList_Statics::NewProp_bOutputCity = { "bOutputCity", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EditHomeTownComponent_eventGetHomeTownList_Parms), &Z_Construct_UFunction_UEditHomeTownComponent_GetHomeTownList_Statics::NewProp_bOutputCity_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UEditHomeTownComponent_GetHomeTownList_Statics::NewProp_bOutputCity_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditHomeTownComponent_GetHomeTownList_Statics::NewProp_bOutputCity_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditHomeTownComponent_GetHomeTownList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditHomeTownComponent_GetHomeTownList_Statics::NewProp_List_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditHomeTownComponent_GetHomeTownList_Statics::NewProp_List,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditHomeTownComponent_GetHomeTownList_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditHomeTownComponent_GetHomeTownList_Statics::NewProp_CurrentHomeTownID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditHomeTownComponent_GetHomeTownList_Statics::NewProp_bOutputCountry,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditHomeTownComponent_GetHomeTownList_Statics::NewProp_bOutputState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditHomeTownComponent_GetHomeTownList_Statics::NewProp_bOutputCity,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditHomeTownComponent_GetHomeTownList_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EditHomeTownComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditHomeTownComponent_GetHomeTownList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditHomeTownComponent, nullptr, "GetHomeTownList", nullptr, nullptr, sizeof(EditHomeTownComponent_eventGetHomeTownList_Parms), Z_Construct_UFunction_UEditHomeTownComponent_GetHomeTownList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditHomeTownComponent_GetHomeTownList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditHomeTownComponent_GetHomeTownList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditHomeTownComponent_GetHomeTownList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditHomeTownComponent_GetHomeTownList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditHomeTownComponent_GetHomeTownList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditHomeTownComponent_SetHomeTown_Statics
	{
		struct EditHomeTownComponent_eventSetHomeTown_Parms
		{
			UMyWrestlerDataObject* Target;
			FHomeTownID NewHomeTown;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Target;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewHomeTown_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewHomeTown;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditHomeTownComponent_SetHomeTown_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditHomeTownComponent_eventSetHomeTown_Parms, Target), Z_Construct_UClass_UMyWrestlerDataObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditHomeTownComponent_SetHomeTown_Statics::NewProp_NewHomeTown_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditHomeTownComponent_SetHomeTown_Statics::NewProp_NewHomeTown = { "NewHomeTown", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditHomeTownComponent_eventSetHomeTown_Parms, NewHomeTown), Z_Construct_UScriptStruct_FHomeTownID, METADATA_PARAMS(Z_Construct_UFunction_UEditHomeTownComponent_SetHomeTown_Statics::NewProp_NewHomeTown_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditHomeTownComponent_SetHomeTown_Statics::NewProp_NewHomeTown_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditHomeTownComponent_SetHomeTown_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditHomeTownComponent_SetHomeTown_Statics::NewProp_Target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditHomeTownComponent_SetHomeTown_Statics::NewProp_NewHomeTown,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditHomeTownComponent_SetHomeTown_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EditHomeTownComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditHomeTownComponent_SetHomeTown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditHomeTownComponent, nullptr, "SetHomeTown", nullptr, nullptr, sizeof(EditHomeTownComponent_eventSetHomeTown_Parms), Z_Construct_UFunction_UEditHomeTownComponent_SetHomeTown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditHomeTownComponent_SetHomeTown_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditHomeTownComponent_SetHomeTown_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditHomeTownComponent_SetHomeTown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditHomeTownComponent_SetHomeTown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditHomeTownComponent_SetHomeTown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEditHomeTownComponent_NoRegister()
	{
		return UEditHomeTownComponent::StaticClass();
	}
	struct Z_Construct_UClass_UEditHomeTownComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEditHomeTownComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMyWrestlerDataEditComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ELITE,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEditHomeTownComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEditHomeTownComponent_GetHomeTownList, "GetHomeTownList" }, // 3075023970
		{ &Z_Construct_UFunction_UEditHomeTownComponent_SetHomeTown, "SetHomeTown" }, // 3377604018
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditHomeTownComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "EditHomeTownComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/EditHomeTownComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEditHomeTownComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditHomeTownComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEditHomeTownComponent_Statics::ClassParams = {
		&UEditHomeTownComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UEditHomeTownComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEditHomeTownComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEditHomeTownComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEditHomeTownComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEditHomeTownComponent, 489798205);
	template<> ELITE_API UClass* StaticClass<UEditHomeTownComponent>()
	{
		return UEditHomeTownComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEditHomeTownComponent(Z_Construct_UClass_UEditHomeTownComponent, &UEditHomeTownComponent::StaticClass, TEXT("/Script/ELITE"), TEXT("UEditHomeTownComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEditHomeTownComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
